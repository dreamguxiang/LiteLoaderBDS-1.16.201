#pragma once

#include "HookAPI.h"
#include "../Global.h"
#include "Vec2.hpp"
#include "Vec3.hpp"
#include "BlockPos.hpp"
#include "AABB.hpp"
#include "BoundingBox.hpp"
#include "ChunkPos.hpp"
#include "ChunkBlockPos.hpp"
#include "VarIntDataOutPut.hpp"
typedef std::string xuid_t;
typedef unsigned long long QWORD;


namespace mce {

LL_CONSTEXPR int static hexToNum(char s) {
    if ('A' <= s && s <= 'F') {
        return 10 + (s - 'A');
    }
    if ('a' <= s && s <= 'f') {
        return 10 + (s - 'a');
    }
    if ('0' <= s && s <= '9') {
        return (s - '0');
    }
    return 0;
}

LL_CONSTEXPR double static hexToNum(std::string_view s) {
    if (s.length() == 2) {
        return (16 * hexToNum(s[0]) + hexToNum(s[1])) / 255.0;
    }
    return 0;
}

class UUID {
    uint64_t a, b;

public:
    MCAPI std::string asString() const;
    MCAPI static UUID fromString(std::string const&);
    MCAPI bool isEmpty() const;
    MCAPI static UUID seedFromString(std::string const&);
    MCAPI static class mce::UUID EMPTY;

    inline operator bool() const {
        return !isEmpty();
    }
};

enum class ColorPalette {
    BLACK,
    INDIGO,
    LAVENDER,
    TEAL,
    COCOA,
    DARK,
    OATMEAL,
    WHITE,
    RED,
    APRICOT,
    YELLOW,
    GREEN,
    VATBLUE,
    SLATE,
    PINK,
    FAWN,
};


class Color {
public:
    float r;
    float g;
    float b;
    float a;
    Color()
    : r(0.0f), g(0.0f), b(0.0f), a(0.0f){};
    Color(float r, float g, float b, float a = 1)
    : r(r), g(g), b(b), a(a){};
    Color(double r, double g, double b, double a = 1)
    : r((float)r), g((float)g), b((float)b), a((float)a){};
    Color(int ir, int ig, int ib, int ia = 255)
    : r(ir / 255.0f), g(ig / 255.0f), b(ib / 255.0f), a(ia / 255.0f){};

    LL_CONSTEXPR Color(std::string_view hex) {
        r = 0, g = 0, b = 0, a = 1;
        if (hex[0] == '#') {
            hex = hex.substr(1);
        }
        if (hex.length() == 3) {
            r = (float)((hexToNum(hex[0]) * 17) / 255.0);
            g = (float)((hexToNum(hex[1]) * 17) / 255.0);
            b = (float)((hexToNum(hex[2]) * 17) / 255.0);
            return;
        }
        if (hex.length() == 4) {
            a = (float)((hexToNum(hex[0]) * 17) / 255.0);
            r = (float)((hexToNum(hex[1]) * 17) / 255.0);
            g = (float)((hexToNum(hex[2]) * 17) / 255.0);
            b = (float)((hexToNum(hex[3]) * 17) / 255.0);
            return;
        }
        if (hex.length() == 6) {
            r = (float)hexToNum(hex.substr(0, 2));
            g = (float)hexToNum(hex.substr(2, 2));
            b = (float)hexToNum(hex.substr(4, 2));
            return;
        }
        if (hex.length() == 8) {
            a = (float)hexToNum(hex.substr(0, 2));
            r = (float)hexToNum(hex.substr(2, 2));
            g = (float)hexToNum(hex.substr(4, 2));
            b = (float)hexToNum(hex.substr(6, 2));
            return;
        }
        return;
    };

    inline operator bool() const {
        return !(*this == mce::Color(0,0,0));
    }

    LIAPI double distanceTo(mce::Color const& dst) const;
    LIAPI std::string toConsoleCode(bool foreground = true) const;
    LIAPI std::string toNearestColorCode() const;
    LIAPI char toNearestParticleColorCode() const;
    LIAPI ColorPalette toNearestParticleColorType() const;
    LIAPI static class mce::Color fromConsoleCode(std::string const&);
    LIAPI static class mce::Color fromColorCode(std::string const&);
    LIAPI class mce::Color sRGBToLinear() const;
    LIAPI class mce::Color LinearTosRGB() const;
    LIAPI class mce::Color LinearToXYZ() const;
    LIAPI class mce::Color XYZToLinear() const;
    LIAPI class mce::Color XYZToLab() const;
    LIAPI class mce::Color LabToXYZ() const;
    LIAPI double deltaE76(mce::Color const& dst) const; // 2.3 for JND
    LIAPI double deltaE94(mce::Color const& dst) const; // 1.0 for JND
    LIAPI double deltaE00(mce::Color const& dst) const; // 1.0 for JND


    inline Vec3 toVec3() const {
        return {r, g, b};
    }

    inline static mce::Color fromVec3(const Vec3& k) {
        return {k.x, k.y, k.z, 1.0f};
    }

    inline BlockPos toBlockPos() const {
        return {r * 255.0f, g * 255.0f, b * 255.0f};
    }

    inline static mce::Color fromBlockPos(const BlockPos& k) {
        return {k.x / 255.0f, k.y / 255.0f, k.z / 255.0f, 1.0f};
    }

    inline bool operator!=(const mce::Color& c) const {
        return !(c == *this);
    }

    inline mce::Color operator*(float c) const {
        return {r * c, g * c, b * c, a * c};
    }

    inline mce::Color operator/(float c) const {
        return {r / c, g / c, b / c, a / c};
    }

    inline mce::Color operator+(float c) const {
        return {r + c, g + c, b + c, a + c};
    }

    inline mce::Color operator-(float c) const {
        return {r - c, g - c, b - c, a - c};
    }

    constexpr mce::Color& operator+=(float c) {
        r += c;
        g += c;
        b += c;
        a += c;
        return *this;
    }

    constexpr mce::Color& operator-=(float c) {
        r -= c;
        g -= c;
        b -= c;
        a -= c;
        return *this;
    }

    constexpr mce::Color& operator*=(float c) {
        r *= c;
        g *= c;
        b *= c;
        a *= c;
        return *this;
    }

    constexpr mce::Color& operator/=(float c) {
        r /= c;
        g /= c;
        b /= c;
        a /= c;
        return *this;
    }

    constexpr mce::Color& operator+=(mce::Color const& c) {
        r += c.r;
        g += c.g;
        b += c.b;
        a += c.a;
        return *this;
    }

    constexpr mce::Color& operator-=(mce::Color const& c) {
        r -= c.r;
        g -= c.g;
        b -= c.b;
        a -= c.a;
        return *this;
    }

    constexpr mce::Color& operator*=(mce::Color const& c) {
        r *= c.r;
        g *= c.g;
        b *= c.b;
        a *= c.a;
        return *this;
    }

    constexpr mce::Color& operator/=(mce::Color const& c) {
        r /= c.r;
        g /= c.g;
        b /= c.b;
        a /= c.a;
        return *this;
    }

    inline mce::Color operator+(mce::Color const& c) const {
        return {r + c.r, g + c.g, b + c.b, a + c.a};
    }

    inline mce::Color operator*(mce::Color const& c) const {
        return {r * c.r, g * c.g, b * c.b, a * c.a};
    }

    inline mce::Color operator/(mce::Color const& c) const {
        return {r / c.r, g / c.g, b / c.b, a / c.a};
    }

    inline mce::Color operator-(mce::Color const& c) const {
        return {r - c.r, g - c.g, b - c.b, a - c.a};
    }

    inline static mce::Color max(const mce::Color& k, const mce::Color& l) {
        return {std::max(k.r, l.r), std::max(k.g, l.g), std::max(k.b, l.b), std::max(k.a, l.a)};
    }

    inline static mce::Color min(const mce::Color& k, const mce::Color& l) {
        return {std::min(k.r, l.r), std::min(k.g, l.g), std::min(k.b, l.b), std::min(k.a, l.a)};
    }

    inline static mce::Color lerp(const mce::Color& k, const mce::Color& l, float m) {
        return k * (1.0f - m) + l * m;
    }

    inline static mce::Color mix(const mce::Color& k, const mce::Color& l, float m) {
        return lerp(k, l, m);
    }
};

static std::unordered_map<ColorPalette, std::pair<char, Color>> const particleColors = {
    // clang-format off
        {mce::ColorPalette::BLACK,    {'B', mce::Color("#000000")}},
        {mce::ColorPalette::INDIGO,   {'I', mce::Color("#144A74")}},
        {mce::ColorPalette::LAVENDER, {'L', mce::Color("#8E65F3")}},
        {mce::ColorPalette::TEAL,     {'T', mce::Color("#07946E")}},
        {mce::ColorPalette::COCOA,    {'C', mce::Color("#AB5236")}},
        {mce::ColorPalette::DARK,     {'D', mce::Color("#56575F")}},
        {mce::ColorPalette::OATMEAL,  {'O', mce::Color("#A2A3A7")}},
        {mce::ColorPalette::WHITE,    {'W', mce::Color("#FFFFFF")}},
        {mce::ColorPalette::RED,      {'R', mce::Color("#FF3040")}},
        {mce::ColorPalette::APRICOT,  {'A', mce::Color("#FF7300")}},
        {mce::ColorPalette::YELLOW,   {'Y', mce::Color("#FFEC27")}},
        {mce::ColorPalette::GREEN,    {'G', mce::Color("#10E436")}},
        {mce::ColorPalette::VATBLUE,  {'V', mce::Color("#29ADFF")}},
        {mce::ColorPalette::SLATE,    {'S', mce::Color("#83769C")}},
        {mce::ColorPalette::PINK,     {'P', mce::Color("#FF77A8")}},
        {mce::ColorPalette::FAWN,     {'E', mce::Color("#FFCCAA")}},
    // clang-format on
};

inline static const char getParticleColorType(ColorPalette const& p) {
    return particleColors.at(p).first;
}

class Blob {
public:
    std::unique_ptr<unsigned char[]> buffer;
    size_t length = 0;


    inline Blob() {
    }
    inline Blob(Blob&& rhs)
    : buffer(std::move(rhs.buffer)), length(rhs.length) {
        rhs.length = 0;
    }
    inline Blob(size_t input_length)
    : buffer(std::make_unique<unsigned char[]>(input_length)), length(input_length) {
    }
    inline Blob(unsigned char const* input, size_t input_length)
    : Blob(input_length) {
        memcpy(buffer.get(), input, input_length);
    }

    inline Blob& operator=(Blob&& rhs) {
        if (&rhs != this) {
            buffer = std::move(rhs.buffer);
            length = rhs.length;
            rhs.length = 0;
        }
        return *this;
    }

    inline Blob clone() const {
        return {data(), size()};
    }

    inline unsigned char* begin() {
        return buffer.get();
    }
    inline unsigned char* end() {
        return buffer.get() + length;
    }
    inline unsigned char const* cbegin() const {
        return buffer.get();
    }
    inline unsigned char const* cend() const {
        return buffer.get() + length;
    }

    inline unsigned char* data() {
        return buffer.get();
    }
    inline unsigned char const* data() const {
        return buffer.get();
    }

    inline bool empty() const {
        return length == 0;
    }
    inline size_t size() const {
        return length;
    }

    inline auto getSpan() const {
        return gsl::make_span(data(), size());
    }
};

static_assert(sizeof(Blob) == 16);

enum class ImageFormat {
    NONE = 0,
    RGB = 1,
    RGBA = 2
};

enum class ImageUsage : int8_t {
    unknown = 0,
    sRGB = 1,
    data = 2
};

inline unsigned numChannels(ImageFormat format) {
    switch (format) {
        case ImageFormat::RGB:
            return 3;
        case ImageFormat::RGBA:
            return 4;
        default:
            return 0;
    }
}

struct Image {
    inline Image(ImageFormat format, unsigned width, unsigned height, ImageUsage usage, Blob&& data)
    : format(format), width(width), height(height), usage(usage), data(std::move(data)) {
    }

public:
    ImageFormat format{};       // 0x0
    unsigned width{}, height{}; // 0x4, 0x8
    ImageUsage usage{};         // 0xC
    Blob data;                  // 0x10

    inline Image(Blob&& data)
    : data(std::move(data)) {
    }
    inline Image(unsigned width, unsigned height, ImageFormat format, ImageUsage usage)
    : format(format), width(width), height(height), usage(usage) {
    }
    inline Image() {
    }

    inline Image& operator=(Image&& rhs) {
        format = rhs.format;
        width = rhs.width;
        height = rhs.height;
        usage = rhs.usage;
        data = std::move(rhs.data);
        return *this;
    }

    inline Image clone() const {
        return {format, width, height, usage, data.clone()};
    }

    inline void copyRawImage(Blob const& blob) {
        data = blob.clone();
    }

    inline bool isEmpty() const {
        return data.empty();
    }

    inline void resizeImageBytesToFitImageDescription() {
        data = Blob{width * height * numChannels(format)};
    }

    inline void setImageDescription(unsigned width, unsigned height, ImageFormat format, ImageUsage usage) {
        this->width = width;
        this->height = height;
        this->format = format;
        this->usage = usage;
    }

    inline void setRawImage(Blob&& buffer) {
        data = std::move(buffer);
    }

    Image(const Image& a1) {
        format = a1.format;
        width = a1.width;
        height = a1.height;
        usage = a1.usage;
        data = a1.data.clone();
    }
};

static_assert(offsetof(Image, data) == 0x10);
static_assert(offsetof(Image, format) == 0x0);
static_assert(offsetof(Image, usage) == 0xC);
static_assert(sizeof(Image) == 32);

}; // namespace mce

namespace std {

template <>
struct hash<mce::Color> {
    std::size_t operator()(mce::Color const& c) const noexcept {
        return (std::hash<float>()(c.r) ^ std::hash<float>()(c.g) ^ std::hash<float>()(c.b) ^ std::hash<float>()(c.a));
    }
};

} // namespace std

template <typename A, typename T>
class AutomaticID {
    T id;

public:
    AutomaticID() {
        id = 0;
    }

    AutomaticID(T x) {
        id = x;
    }

    inline operator T() const {
        return id;
    }
};

#include "ActorUniqueID.hpp"

// static_assert(!std::is_pod_v<ActorUniqueID>);
class NetherNet {
public:
    struct NetworkID;
};

class ActorRuntimeID {
public:
    unsigned long long id;

    inline unsigned long long get() const {
        return id;
    }

    inline operator unsigned long long() const {
        return id;
    }
};
// static_assert(std::is_pod_v<ActorRuntimeID>);

#include "RelativeFloat.hpp"

// namespace Core {
//
// class PathPart {
// public:
//     std::string data;
// };
//
// class Path : public PathPart {
// public:
// };
//
// template <typename T>
// class PathBuffer {
//     T value;
//     operator T&() noexcept {
//         return value;
//     }
//     operator T const &() const noexcept {
//         return value;
//     }
// };
//
// }; // namespace Core

namespace gametest {
class BaseGameTestBatchRunner;

class BaseGameTestFunction;

class BaseGameTestHelper;

class BaseGameTestInstance;

class GameTestBatch;

struct GameTestError;

class GameTestRegistry;

class GameTestTicker;

class IGameTestFunctionContext;

class IGameTestHelperProvider;

struct TestParameters;
}; // namespace gametest

namespace DBHelpers {
enum Category;
}; // namespace DBHelpers

class AgentCommands {
public:
    class Command;
};

#include "../MC/Automation.hpp"

class ClientBlobCache {
public:
    struct Server {
        class TransferBuilder;

        class ActiveTransfersManager;
    };
};

class ClientBlockPipeline {
public:
    template <typename T>
    class VolumeOf;

    struct BlockSchematic;
};

struct ISurfaceBuilder {
    struct BuildParameters;
};

struct FeatureLoading {
    template <typename T>
    struct ConcreteFeatureHolder;
    struct FeatureRootParseContext;
    template <typename T>
    struct ConcreteFeatureHolder;
};

template <typename T1, typename T2>
class OperationNode;

struct OperationNodeDetails {
    template <typename T1, typename T2>
    class WorkingData;
};

struct PositionTrackingDB {
    class TrackingRecord;
    class PositionTrackingDBClient;
    class PositionTrackingDBServer;
};

struct BlockGeometry {
    struct Model;

    class TessellatedModel;
};

struct CanyonFeatureUtils {
    struct CanyonConfiguration;
};

class IInPackagePacks {
public:
    struct MetaData;
};

struct GameEventConfig {
    enum class GameEvents;
};

#include "IMinecraftEventing.hpp"

struct OperationNodeValues {
    enum class Terrain;
};
class Editor {
public:
    class IEditorManager;
};

struct SubChunkStorageUnit {
    enum class PruneType;
};

// Templates
template <typename T, typename T2, int unk>
class TypedServerNetId {
public:
    T2 netId;
    inline operator T2() {
        return netId;
    }
};

template <typename T, typename T2, int unk>
class TypedClientNetId {
public:
    T2 netId;

    virtual void clientInit(TypedClientNetId<T, T2, unk>);
    virtual void clientInit();
};
template <typename T, typename T2,int unk>
class SimpleClientNetId {
public:
    T2 netId;

    virtual void clientInit(TypedClientNetId<T, T2, unk>);
    virtual void clientInit();
};

template <typename T, typename T2, int unk>
class TypedRuntimeId {
public:
    T2 netId;
};

template <typename T, typename T2>
class AutomaticID;

template <typename T, typename T2>
class BidirectionalUnorderedMap {
public:
    std::unordered_map<T, T2> mMap1;
    std::unordered_map<T2, T> mMap2;
};

template <typename T>
class BlockDataFetchResult;

template <typename T>
class CommandSelectorResults;

template <typename... T>
class Factory;

template <typename T>
class InheritanceTree;

// enum class ItemStackRequestActionType : char;
// template <typename T, ItemStackRequestActionType actionType>
// class ItemStackRequestActionCraft;

template <typename T>
class ItemStateVariant;

template <typename T>
class LevelChunkGridAreaElement;

template <typename T>
class GridArea;

template <typename T>
class OwnerPtrT;

template <typename T>
class ServiceReference;

template <typename T>
class SharedPtr;

template <typename T>
class StackRefResultT;

template <typename T>
class WeakPtr {
    T** value;

public:
    inline T* get() {
        if (value)
            return *value;
        return nullptr;
    }
    inline T const* get() const {
        if (value)
            return *value;
        return nullptr;
    }
    inline T& operator*() {
        return *get();
    }
    inline T const& operator*() const {
        return *get();
    }
    inline operator bool() const {
        return get() != nullptr;
    }
};

template <typename T>
class WeakRefT;

template <typename T>
struct SharePtrRefTraits;

template <typename T>
class SubChunkStorage;

template <typename T, typename T2>
class TagRegistry;

template <typename T>
struct IDType;

template <typename T>
class ToFloatFunction;

template <typename T>
class TypedScreenCapabilities {};

template <typename T, typename T2, typename T3, typename T4 = class UNK>
class ViewedEntityContextT;

template <typename T>
class FlagComponent;

template <typename T>
class WeightedChoices;

template <typename T>
class buffer_span;

template <typename T>
class buffer_span_mut;

template <typename T>
class optional_ref {
    T* value;

public:
    inline T* get() const {
        if (*this)
            return value;
        return nullptr;
    }
    // inline T* set(T const& val)
    //{
    //     *value = &val;
    // }
    inline T& operator*() const {
        return *value;
    }
    inline T* operator->() const {
        return value;
    }
    inline operator bool() const {
        return value != nullptr;
    }
};

namespace cg {
class ImageBuffer;
};

template <int a>
class DividedPos2d;

// template <typename T>
// struct GameplayHandlerResult;

template <typename T>
struct GameplayHandlerResult;

template <int T>
class ItemStackRequestActionDataless;

template <typename T>
class OperationGraphResult;

template <typename T1>
class SmallSet;

template <typename T1>
struct TaskStartInfoEx;

template <typename T1>
class WildcardCommandSelector;

// enum
// clang-format off
enum class ContainerType : char {
    INVENTORY              = -1,
    NONE                   = -9,
    CONTAINER              = 0,
    WORKBENCH              = 1,
    FURNACE                = 2,
    ENCHANTMENT            = 3,
    BREWING_STAND          = 4,
    ANVIL                  = 5,
    DISPENSER              = 6,
    DROPPER                = 7,
    HOPPER                 = 8,
    CAULDRON               = 9,
    MINECART_CHEST         = 10,
    MINECART_HOPPER        = 11,
    HORSE                  = 12,
    TRADE                  = 15, // NotGenerated
    MINECART_COMMAND_BLOCK = 16,
    JUKEBOX                = 17,
    COMPOUND_CREATOR       = 20,
    ELEMENT_CONSTRUCTOR    = 21,
    MATERIAL_REDUCER       = 22,
    LAB_TABLE              = 23,
    BLAST_FURNACE          = 27,
    SMOKER                 = 28,
    STONECUTTER            = 29,
    HUD                    = 31,
    SMITHING_TABLE         = 33,
};

enum class BlockActorType : int {
    Undefined = 0x0,
    Furnace = 0x1,
    Chest = 0x2,
    NetherReactor = 0x3,
    Sign = 0x4,
    MobSpawner = 0x5,
    Skull = 0x6,
    FlowerPot = 0x7,
    BrewingStand = 0x8,
    EnchantingTable = 0x9,
    DaylightDetector = 0xA,
    Music = 0xB,
    Comparator = 0xC,
    Dispenser = 0xD,
    Dropper = 0xE,
    Hopper = 0xF,
    Cauldron = 0x10,
    ItemFrame = 0x11,
    PistonArm = 0x12,
    MovingBlock = 0x13,
    Chalkboard = 0x14,
    Beacon = 0x15,
    EndPortal = 0x16,
    EnderChest = 0x17,
    EndGateway = 0x18,
    ShulkerBox = 0x19,
    CommandBlock = 0x1A,
    Bed = 0x1B,
    Banner = 0x1C,
    StructureBlock = 0x20,
    Jukebox = 0x21,
    ChemistryTable = 0x22,
    Conduit = 0x23,
    JigsawBlock = 0x24,
    Lectern = 0x25,
    BlastFurnace = 0x26,
    Smoker = 0x27,
    Bell = 0x28,
    Campfire = 0x29,
    BarrelBlock = 0x2A,
    Beehive = 0x2B,
    Lodestone = 0x2C,
    ModBlock = 0xFF,
    _count = 0x100,
};


enum class BlockProperty : unsigned __int64 {
    None = 0x0,
    Stair = 0x1,
    HalfSlab = 0x2,
    Hopper = 0x4,
    TopSnow = 0x8,
    FenceGate = 0x10,
    Leaf = 0x20,
    ThinConnects2D = 0x40,
    Connects2D = 0x80,
    Carpet = 0x100,
    Button = 0x200,
    Door = 0x400,
    Portal = 0x800,
    Heavy = 0x1000,
    Snow = 0x2000,
    Trap = 0x4000,
    Sign = 0xFFFF8000,
    Walkable = 0x10000,
    PressurePlate = 0x20000,
    PistonBlockGrabber = 0x40000,
    TopSolidBlocking = 0x80000,
    SolidBlocking = 0x100000,
    CubeShaped = 0x200000,
    Power_NO = 0x400000,
    Power_BlockDown = 0x800000,
    Immovable = 0x1000000,
    BreakOnPush = 0x2000000,
    Piston = 0x4000000,
    InfiniBurn = 0x8000000,
    RequiresWorldBuilder = 0x10000000,
    CausesDamage = 0x20000000,
    BreaksWhenFallenOnByHeavy = 0x40000000,
    OnlyPistonPush = 0x80000000,
    Liquid = 0x100000000,
    CanBeBuiltOver = 0x200000000,
    SnowRecoverable = 0x400000000,
    Scaffolding = 0x800000000,
    CanSupportCenterHangingBlock = 0x1000000000,
    BreaksWhenHitByArrow = 0x2000000000,
    Unwalkable = 0x4000000000,
    Impenetrable = 0x8000000000,
    Hollow = 0x10000000000,
    OperatorBlock = 0x20000000000,
    SupportedByFlowerPot = 0x40000000000,
    PreventsJumping = 0x80000000000,
    ContainsHoney = 0x100000000000,
    Slime = 0x200000000000,
    IrregularShapedPathable = 0x400000000000,
    Climbable = 0x800000000000,
    CanHaltWhenClimbing = 0x1000000000000,
};

enum class GameType : int {
    Survival  = 0,
    Creative  = 1,
    Adventure = 2,
    Spectator = 6
};

enum class CreativeItemCategory : int {
    All = 0x0,
    Construction = 0x1,
    Nature = 0x2,
    Equipment = 0x3,
    Items = 0x4,
    ItemCommandOnly = 0x5,
    Undefined = 0x6,
    NUM_CATEGORIES = 0x7,
    Custom = 0x8,
    Count = 0x9,
};

enum class Mirror : unsigned char {
    None = 0x0,
    X = 0x1,
    Z = 0x2,
    XZ = 0x3,
};
enum class Rotation : unsigned char {
    None = 0x0,
    Rotate90 = 0x1,
    Rotate180 = 0x2,
    Rotate270 = 0x3,
    Total = 0x4,
};


enum class ActorType : unsigned int {
    Undefined = 0x1,
    TypeMask = 0xFF,
    Mob = 0x100,
    PathfinderMob = 0x300,
    Monster = 0xB00,
    Animal = 0x1300,
    TamableAnimal = 0x5300,
    Ambient = 0xFFFF8100,
    UndeadMob = 0x10B00,
    ZombieMonster = 0x30B00,
    Arthropod = 0x40B00,
    Minecart = 0x80000,
    SkeletonMonster = 0x110B00,
    EquineAnimal = 0x205300,
    Projectile = 0x400000,
    AbstractArrow = 0x800000,
    WaterAnimal = 0x2300,
    VillagerBase = 0x1000300,
    Chicken = 0x130A,
    Cow = 0x130B,
    Pig = 0x130C,
    Sheep = 0x130D,
    Wolf = 0x530E,
    Villager = 0x100030F,
    MushroomCow = 0x1310,
    Squid = 0x2311,
    Rabbit = 0x1312,
    Bat = 0xFFFF8113,
    IronGolem = 0x314,
    SnowGolem = 0x315,
    Ocelot = 0x5316,
    Horse = 0x205317,
    PolarBear = 0x131C,
    Llama = 0x131D,
    Parrot = 0x531E,
    Dolphin = 0x231F,
    Donkey = 0x205318,
    Mule = 0x205319,
    SkeletonHorse = 0x215B1A,
    ZombieHorse = 0x215B1B,
    Zombie = 0x30B20,
    Creeper = 0xB21,
    Skeleton = 0x110B22,
    Spider = 0x40B23,
    PigZombie = 0x10B24,
    Slime = 0xB25,
    EnderMan = 0xB26,
    Silverfish = 0x40B27,
    CaveSpider = 0x40B28,
    Ghast = 0xB29,
    LavaSlime = 0xB2A,
    Blaze = 0xB2B,
    ZombieVillager = 0x30B2C,
    Witch = 0xB2D,
    Stray = 0x110B2E,
    Husk = 0x30B2F,
    WitherSkeleton = 0x110B30,
    Guardian = 0xB31,
    ElderGuardian = 0xB32,
    Npc = 0x133,
    WitherBoss = 0x10B34,
    Dragon = 0xB35,
    Shulker = 0xB36,
    Endermite = 0x40B37,
    Agent = 0x138,
    Vindicator = 0xB39,
    Phantom = 0x10B3A,
    IllagerBeast = 0xB3B,
    ArmorStand = 0x13D,
    TripodCamera = 0x13E,
    Player = 0x13F,
    ItemEntity = 0x40,
    PrimedTnt = 0x41,
    FallingBlock = 0x42,
    MovingBlock = 0x43,
    ExperiencePotion = 0x400044,
    Experience = 0x45,
    EyeOfEnder = 0x46,
    EnderCrystal = 0x47,
    FireworksRocket = 0x48,
    Trident = 0xC00049,
    Turtle = 0x134A,
    Cat = 0x534B,
    ShulkerBullet = 0x40004C,
    FishingHook = 0x4D,
    Chalkboard = 0x4E,
    DragonFireball = 0x40004F,
    Arrow = 0xC00050,
    Snowball = 0x400051,
    ThrownEgg = 0x400052,
    Painting = 0x53,
    LargeFireball = 0x400055,
    ThrownPotion = 0x400056,
    Enderpearl = 0x400057,
    LeashKnot = 0x58,
    WitherSkull = 0x400059,
    BoatRideable = 0x5A,
    WitherSkullDangerous = 0x40005B,
    LightningBolt = 0x5D,
    SmallFireball = 0x40005E,
    AreaEffectCloud = 0x5F,
    LingeringPotion = 0x400065,
    LlamaSpit = 0x400066,
    EvocationFang = 0x400067,
    EvocationIllager = 0xB68,
    Vex = 0xB69,
    MinecartRideable = 0x80054,
    MinecartHopper = 0x80060,
    MinecartTNT = 0x80061,
    MinecartChest = 0x80062,
    MinecartFurnace = 0x80063,
    MinecartCommandBlock = 0x80064,
    IceBomb = 0x40006A,
    Balloon = 0x6B,
    Pufferfish = 0x236C,
    Salmon = 0x236D,
    Drowned = 0x30B6E,
    Tropicalfish = 0x236F,
    Fish = 0x2370,
    Panda = 0x1371,
    Pillager = 0xB72,
    VillagerV2 = 0x1000373,
    ZombieVillagerV2 = 0x30B74,
    Shield = 0x75,
    WanderingTrader = 0x376,
    Lectern = 0x77,
    ElderGuardianGhost = 0xB78,
    Fox = 0x1379,
    Bee = 0x17A,
    Piglin = 0x17B,
    Hoglin = 0x137C,
    Strider = 0x137D,
    Zoglin = 0x10B7E,
    PiglinBrute = 0x17F,
    Goat = 0x1380,
    CustomProjectile = 0x4000FE,
    EntityExtension = 0xFF,
    MAX_ENTITY_ID = 0x100,
};

enum class BlockRenderLayer : unsigned int {
    RENDERLAYER_DOUBLE_SIDED = 0x0,
    RENDERLAYER_BLEND_WATER = 0x1,
    RENDERLAYER_ALPHATEST_MICRO_BLOCK = 0x2,
    RENDERLAYER_RAY_TRACED_WATER = 0x3,
    RENDERLAYER_BLEND = 0x4,
    RENDERLAYER_OPAQUE = 0x5,
    RENDERLAYER_OPTIONAL_ALPHATEST = 0x6,
    RENDERLAYER_ALPHATEST = 0x7,
    RENDERLAYER_SEASONS_OPAQUE = 0x8,
    RENDERLAYER_SEASONS_OPTIONAL_ALPHATEST = 0x9,
    RENDERLAYER_ALPHATEST_SINGLE_SIDE = 0xA,
    RENDERLAYER_ENDPORTAL = 0xB,
    RENDERLAYER_BARRIER = 0xC,
    RENDERLAYER_STRUCTURE_VOID = 0xD,
    _RENDERLAYER_COUNT = 0xE,
};


enum class MobSpawnMethod : int {
    Unknown = 0x0,
    SpawnEgg = 0x1,
    Command = 0x2,
    Dispenser = 0x3,
    Spawner = 0x4,
    SpawnMethod_Count = 0x5,
};

enum class Difficulty : int {
    Peaceful = 0,
    Easy     = 1,
    Normal   = 2,
    Hard     = 3
};

enum class PlayerPermissionLevel : int {
    Visitor  = 0,
    Member   = 1,
    Operator = 2,
    Custom   = 3
};

enum class UpdateBlockLayer : int {
    UpdateBlockDefault,
    UpdateBlockLiquid
};

enum class UpdateBlockFlags : int {
    UpdateBlockNone        = 0,
    BlockUpdateNeighbors   = 1,
    BlockUpdateNetwork     = 2,
    BlockUpdateAll         = 3, // default value in BDS
    BlockUpdateNoGraphic   = 4,
    BlockUpdatePriority    = 8,
    BlockUpdateAllPriority = 11
    // old one not correctly ?
    // BlockUpdateNeighbours = 1,
    // BlockUpdateNetwork = 2,
    // BlockUpdateNoGraphics = 3,
    // BlockUpdatePriority = 4,
};

enum class TextType : char {
    RAW           = 0,
    CHAT          = 1,
    TRANSLATION   = 2,
    POPUP         = 3,
    JUKEBOX_POPUP = 4,
    TIP           = 5,
    SYSTEM        = 6,
    WHISPER       = 7,
    ANNOUNCEMENT  = 8,
    JSON          = 9,
    JSON_WHISPER  = 10
};

enum class TitleType : int {
    Clear               = 0,
    Reset               = 1,
    SetTitle            = 2,
    SetSubtitle         = 3,
    SetActionBar        = 4,
    SetDurations        = 5,
    TitleTextObject     = 6,
    SubtitleTextObject  = 7,
    ActionbarTextObject = 8
};
enum class BossEvent : int {
    Show                    = 0,
    RegisterPlayer          = 1,
    Hide                    = 2,
    UnregisterPlayer        = 3,
    HealthPercentage        = 4,
    Title                   = 5,
    AppearanceProperties    = 6,
    Texture                 = 7,
    ResendRaidBossEventData = 8,
};

enum class TrustedSkinFlag : char {
    Unset = 0x0,
    False = 0x1,
    True = 0x2,
};
enum class BossEventColour : int {
    Grey   = 0,
    Blue   = 1,
    Red    = 2,
    Green  = 3,
    Yellow = 4,
    Purple = 5,
    White  = 6
};

enum class BuildPlatform : int {
    Google = 0x1,
    iOS = 0x2,
    OSX = 0x3,
    Amazon = 0x4,
    GearVR = 0x5,
    UWP = 0x7,
    Win32 = 0x8,
    Dedicated = 0x9,
    PS4 = 0xB,
    Nx = 0xC,
    Xbox = 0xD,
    WindowsPhone = 0xE,
    Unknown = 0xFF,
};

enum class ContainerEnumName : int8_t {
    AnvilInputContainer                 = 0,
    AnvilMaterialContainer              = 1,
    AnvilResultPreviewContainer         = 2,
    SmithingTableInputContainer         = 3,
    SmithingTableMaterialContainer      = 4,
    SmithingTableResultPreviewContainer = 5,
    ArmorContainer                      = 6,
    LevelEntityContainer                = 7,
    BeaconPaymentContainer              = 8,
    BrewingStandInputContainer          = 9,
    BrewingStandResultContainer         = 10,
    BrewingStandFuelContainer           = 11,
    CombinedHotbarAndInventoryContainer = 12,
    CraftingInputContainer              = 13,
    CraftingOutputPreviewContainer      = 14,
    RecipeConstructionContainer         = 15,
    RecipeNatureContainer               = 16,
    RecipeItemsContainer                = 17,
    RecipeSearchContainer               = 18,
    RecipeSearchBarContainer            = 19,
    RecipeEquipmentContainer            = 20,
    EnchantingInputContainer            = 21,
    EnchantingMaterialContainer         = 22,
    FurnaceFuelContainer                = 23,
    FurnaceIngredientContainer          = 24,
    FurnaceResultContainer              = 25,
    HorseEquipContainer                 = 26,
    HotbarContainer                     = 27,
    InventoryContainer                  = 28,
    ShulkerBoxContainer                 = 29,
    TradeIngredient1Container           = 30,
    TradeIngredient2Container           = 31,
    TradeResultPreviewContainer         = 32,
    OffhandContainer                    = 33,
    CompoundCreatorInput                = 34,
    CompoundCreatorOutputPreview        = 35,
    ElementConstructorOutputPreview     = 36,
    MaterialReducerInput                = 37,
    MaterialReducerOutput               = 38,
    LabTableInput                       = 39,
    LoomInputContainer                  = 40,
    LoomDyeContainer                    = 41,
    LoomMaterialContainer               = 42,
    LoomResultPreviewContainer          = 43,
    BlastFurnaceIngredientContainer     = 44,
    SmokerIngredientContainer           = 45,
    Trade2Ingredient1Container          = 46,
    Trade2Ingredient2Container          = 47,
    Trade2ResultPreviewContainer        = 48,
    GrindstoneInputContainer            = 49,
    GrindstoneAdditionalContainer       = 50,
    GrindstoneResultPreviewContainer    = 51,
    StonecutterInputContainer           = 52,
    StonecutterResultPreviewContainer   = 53,
    CartographyInputContainer           = 54,
    CartographyAdditionalContainer      = 55,
    CartographyResultPreviewContainer   = 56,
    BarrelContainer                     = 57,
    CursorContainer                     = 58,
    CreatedOutputContainer              = 59
};

enum class CommandPermissionLevel : unsigned char {
    Any = 0x0,
    GameMasters = 0x1,
    Admin = 0x2,
    Host = 0x3,
    Owner = 0x4,
    Internal = 0x5,
};

enum class ParticleType {
    dragondestroyblock    = 0x40,
    none                  = 0x00,
    bubble                = 0x01,
    bubblemanual          = 0x02,
    crit                  = 0x03,
    blockforcefield       = 0x04,
    smoke                 = 0x05,
    explode               = 0x06,
    evaporation           = 0x07,
    flame                 = 0x08,
    candleflame           = 0x09,
    lava                  = 0x0a,
    largesmoke            = 0x0b,
    reddust               = 0x0c,
    risingborderdust      = 0x0d,
    iconcrack             = 0x0e,
    snowballpoof          = 0x0f,
    largeexplode          = 0x10,
    hugeexplosion         = 0x11,
    mobflame              = 0x12,
    heart                 = 0x13,
    terrain               = 0x14,
    townaura              = 0x15,
    portal                = 0x16,
    watersplash           = 0x18,
    watersplashmanual     = 0x19,
    waterwake             = 0x1a,
    dripwater             = 0x1b,
    driplava              = 0x1c,
    driphoney             = 0x1d,
    stalactitedripwater   = 0x1e,
    stalactitedriplava    = 0x1f,
    fallingdust           = 0x20,
    mobspell              = 0x21,
    mobspellambient       = 0x22,
    mobspellinstantaneous = 0x23,
    ink                   = 0x24,
    slime                 = 0x25,
    rainsplash            = 0x26,
    villagerangry         = 0x27,
    villagerhappy         = 0x28,
    enchantingtable       = 0x29,
    trackingemitter       = 0x2a,
    note                  = 0x2b,
    witchspell            = 0x2c,
    carrotboost           = 0x2d,
    mobappearance         = 0x2e,
    endrod                = 0x2f,
    dragonbreath          = 0x30,
    spit                  = 0x31,
    totem                 = 0x32,
    food                  = 0x33,
    fireworksstarter      = 0x34,
    fireworks             = 0x35,
    fireworksoverlay      = 0x36,
    balloongas            = 0x37,
    coloredflame          = 0x38,
    sparkler              = 0x39,
    conduit               = 0x3a,
    bubblecolumnup        = 0x3b,
    bubblecolumndown      = 0x3c,
    sneeze                = 0x3d,
    shulkerbullet         = 0x3e,
    bleach                = 0x3f,
    myceliumdust          = 0x41,
    fallingborderdust     = 0x42,
    campfiresmoke         = 0x43,
    campfiresmoketall     = 0x44,
    dragonbreathfire      = 0x45,
    dragonbreathtrail     = 0x46,
    soul                  = 0x48,
    obsidiantear          = 0x49,
    portalreverse         = 0x4a,
    snowflake             = 0x4b,
    wax                   = 0x50,
    electricspark         = 0x51,
    shriek                = 0x52,
    sculksoul             = 0x53
};

enum class transactionType {
    NormalTransaction          = 0x00,
    InventoryMismatch          = 0x01,
    ItemUseTransaction         = 0x02,
    ItemUseOnEntityTransaction = 0x03,
    ItemReleaseTransaction     = 0x04
};

enum class ItemStackRequestActionType : char {
    Take                                     = 0x00,
    Place                                    = 0x01,
    Swap                                     = 0x02,
    Drop                                     = 0x03,
    Destroy                                  = 0x04,
    Consume                                  = 0x05,
    Create                                   = 0x06,
    PlaceInItemContainer                     = 0x07,
    TakeFromItemContainer                    = 0x08,
    ScreenLabTableCombine                    = 0x09,
    ScreenBeaconPayment                      = 0x0a,
    ScreenHUDMineBlock                       = 0x0b,
    CraftRecipe                              = 0x0c,
    CraftRecipeAuto                          = 0x0d,
    CraftCreative                            = 0x0e,
    CraftRecipeOptional                      = 0x0f,
    CraftRepairAndDisenchant                 = 0x10,
    CraftLoom                                = 0x11,
    CraftNonImplemented_DEPRECATEDASKTYLAING = 0x12,
    CraftResults_DEPRECATEDASKTYLAING        = 0x13,
};

enum class ObjectiveSortOrder : char {
    Ascending  = 0,
    Descending = 1
};

enum class PlayerScoreSetFunction : char {
    Set    = 0,
    Add    = 1,
    Remove = 2
};

enum class ContainerID : uint8_t {
    Invalid        = 0xff,
    Inventory      = 0,
    First          = 1,
    Last           = 100,
    Offhand        = 119,
    Armor          = 120,
    SelectionSlots = 122,
    PlayerUIOnly   = 124
};

enum class FaceID : char {
    Unknown = -1,
    Down    = 0,
    Up      = 1,
    North   = 2,
    South   = 3,
    West    = 4,
    East    = 5,
};

enum class MinecraftPacketIds : int {
    Login                             = 0x01,
    PlayStatus                        = 0x02,
    ServerToClientHandshake           = 0x03,
    ClientToServerHandshake           = 0x04,
    Disconnect                        = 0x05,
    ResourcePacksInfo                 = 0x06,
    ResourcePackStack                 = 0x07,
    ResourcePackClientResponse        = 0x08,
    Text                              = 0x09,
    SetTime                           = 0x0A,
    StartGame                         = 0x0B,
    AddPlayer                         = 0x0C,
    AddActor                          = 0x0D,
    RemoveActor                       = 0x0E,
    AddItemActor                      = 0x0F,
    TakeItemActor                     = 0x11,
    MoveActorAbsolute                 = 0x12,
    MovePlayer                        = 0x13,
    PassengerJump                     = 0x14,
    UpdateBlock                       = 0x15,
    AddPainting                       = 0x16,
    TickSync                          = 0x17,
    LevelSoundEventV1                 = 0x18,
    LevelEvent                        = 0x19,
    BlockEvent                        = 0x1A,
    ActorEvent                        = 0x1B,
    MobEffect                         = 0x1C,
    UpdateAttributes                  = 0x1D,
    InventoryTransaction              = 0x1E,
    MobEquipment                      = 0x1F,
    MobArmorEquipment                 = 0x20,
    Interact                          = 0x21,
    BlockPickRequest                  = 0x22,
    ActorPickRequest                  = 0x23,
    PlayerAction                      = 0x24,
    HurtArmor                         = 0x26,
    SetActorData                      = 0x27,
    SetActorMotion                    = 0x28,
    SetActorLink                      = 0x29,
    SetHealth                         = 0x2A,
    SetSpawnPosition                  = 0x2B,
    Animate                           = 0x2C,
    Respawn                           = 0x2D,
    ContainerOpen                     = 0x2E,
    ContainerClose                    = 0x2F,
    PlayerHotbar                      = 0x30,
    InventoryContent                  = 0x31,
    InventorySlot                     = 0x32,
    ContainerSetData                  = 0x33,
    CraftingData                      = 0x34,
    CraftingEvent                     = 0x35,
    GuiDataPickItem                   = 0x36,
    AdventureSettings                 = 0x37,
    BlockActorData                    = 0x38,
    PlayerInput                       = 0x39,
    LevelChunk                        = 0x3A,
    SetCommandsEnabled                = 0x3B,
    SetDifficulty                     = 0x3C,
    ChangeDimension                   = 0x3D,
    SetPlayerGameType                 = 0x3E,
    PlayerList                        = 0x3F,
    SimpleEvent                       = 0x40,
    Event                             = 0x41,
    SpawnExperienceOrb                = 0x42,
    ClientboundMapItemData            = 0x43,
    MapInfoRequest                    = 0x44,
    RequestChunkRadius                = 0x45,
    ChunkRadiusUpdated                = 0x46,
    ItemFrameDropItem                 = 0x47,
    GameRulesChanged                  = 0x48,
    Camera                            = 0x49,
    BossEvent                         = 0x4A,
    ShowCredits                       = 0x4B,
    AvailableCommands                 = 0x4C,
    CommandRequest                    = 0x4D,
    CommandBlockUpdate                = 0x4E,
    CommandOutput                     = 0x4F,
    UpdateTrade                       = 0x50,
    UpdateEquip                       = 0x51,
    ResourcePackDataInfo              = 0x52,
    ResourcePackChunkData             = 0x53,
    ResourcePackChunkRequest          = 0x54,
    Transfer                          = 0x55,
    PlaySound                         = 0x56,
    StopSound                         = 0x57,
    SetTitle                          = 0x58,
    AddBehaviorTree                   = 0x59,
    StructureBlockUpdate              = 0x5A,
    ShowStoreOffer                    = 0x5B,
    PurchaseReceipt                   = 0x5C,
    PlayerSkin                        = 0x5D,
    SubClientLogin                    = 0x5E,
    AutomationClientConnect           = 0x5F,
    SetLastHurtBy                     = 0x60,
    BookEdit                          = 0x61,
    NpcRequest                        = 0x62,
    PhotoTransfer                     = 0x63,
    ModalFormRequest                  = 0x64,
    ModalFormResponse                 = 0x65,
    ServerSettingsRequest             = 0x66,
    ServerSettingsResponse            = 0x67,
    ShowProfile                       = 0x68,
    SetDefaultGameType                = 0x69,
    RemoveObjective                   = 0x6A,
    SetDisplayObjective               = 0x6B,
    SetScore                          = 0x6C,
    LabTable                          = 0x6D,
    UpdateBlockSynced                 = 0x6E,
    MoveActorDelta                    = 0x6F,
    SetScoreboardIdentity             = 0x70,
    SetLocalPlayerAsInitialized       = 0x71,
    UpdateSoftEnum                    = 0x72,
    NetworkStackLatency               = 0x73,
    ScriptCustomEvent                 = 0x75,
    SpawnParticleEffect               = 0x76,
    AvailableActorIdentifiers         = 0x77,
    LevelSoundEventV2                 = 0x78,
    NetworkChunkPublisherUpdate       = 0x79,
    BiomeDefinitionList               = 0x7A,
    LevelSoundEvent                   = 0x7B,
    LevelEventGeneric                 = 0x7C,
    LecternUpdate                     = 0x7D,
    AddEntity                         = 0x7F,
    RemoveEntity                      = 0x80,
    ClientCacheStatus                 = 0x81,
    OnScreenTextureAnimation          = 0x82,
    MapCreateLockedCopy               = 0x83,
    StructureTemplateDataRequest      = 0x84,
    StructureTemplateDataResponse     = 0x85,
    ClientCacheBlobStatus             = 0x87,
    ClientCacheMissResponse           = 0x88,
    EducationSettings                 = 0x89,
    Emote                             = 0x8A,
    MultiplayerSettings               = 0x8B,
    SettingsCommand                   = 0x8C,
    AnvilDamage                       = 0x8D,
    CompletedUsingItem                = 0x8E,
    NetworkSettings                   = 0x8F,
    PlayerAuthInput                   = 0x90,
    CreativeContent                   = 0x91,
    PlayerEnchantOptions              = 0x92,
    ItemStackRequest                  = 0x93,
    ItemStackResponse                 = 0x94,
    PlayerArmorDamage                 = 0x95,
    CodeBuilder                       = 0x96,
    UpdatePlayerGameType              = 0x97,
    EmoteList                         = 0x98,
    PositionTrackingDBServerBroadcast = 0x99,
    PositionTrackingDBClientRequest   = 0x9A,
    DebugInfo                         = 0x9B,
    PacketViolationWarning            = 0x9C,
    MotionPredictionHints             = 0x9D,
    AnimateEntity                     = 0x9E,
    CameraShake                       = 0x9F,
    PlayerFog                         = 0xA0,
    CorrectPlayerMovePrediction       = 0xA1,
    ItemComponent                     = 0xA2,
    FilterText                        = 0xA3,
    ClientboundDebugRenderer          = 0xA4,
    SyncActorProperty                 = 0xA5,
    AddVolumeEntity                   = 0xA6,
    RemoveVolumeEntity                = 0xA7,
    SimulationType                    = 0xA8,
    NpcDialogue                       = 0xA9,
    EduUriResource                    = 0xAA,
    CreatePhoto                       = 0xAB,
    UpdateSubChunkBlocks              = 0xAC,
    PhotoInfoRequest                  = 0xAD, // removed
    SubChunk                          = 0xAE,
    SubChunkRequest                   = 0xAF,
    PlayerStartItemCooldown           = 0xB0,
    ScriptMessage                     = 0xB1,
    CodeBuilderSource                 = 0xB2,
    TickingAreasLoadStatus            = 0xB3,
    DimensionData                     = 0xB4,
    AgentActionEvent                  = 0xB5,
    ChangeMobProperty                 = 0xB6,
    LessonProgress                    = 0xB7,
    RequestAbility                    = 0xB8,
    RequestPermissions                = 0xB9,
    ToastRequest                      = 0xBA,
    UpdateAbilities                   = 0xBB,
    UpdateAdventureSettings           = 0xBC,
    DeathInfo                         = 0XBD,
    EditorNetwork                     = 0XBE,
    FeatureRegistry                   = 0XBF   
};

enum ItemStackNetResult : unsigned char {
    Success                                          = 0,
    Error                                            = 1,
    InvalidRequestActionType                         = 2,
    ActionRequestNotAllowed                          = 3,
    ScreenHandlerEndRequestFailed                    = 4,
    ItemRequestActionHandlerCommitFailed             = 5,
    InvalidRequestCraftActionType                    = 6,
    InvalidCraftRequest                              = 7,
    InvalidCraftRequestScreen                        = 8,
    InvalidCraftResult                               = 9,
    InvalidCraftResultIndex                          = 10,
    InvalidCraftResultItem                           = 11,
    InvalidItemNetId                                 = 12,
    MissingCreatedOutputContainer                    = 13,
    FailedToSetCreatedItemOutputSlot                 = 14,
    RequestAlreadyInProgress                         = 15,
    FailedToInitSparseContainer                      = 16,
    ResultTransferFailed                             = 17,
    ExpectedItemSlotNotFullyConsumed                 = 18,
    ExpectedAnywhereItemNotFullyConsumed             = 19,
    ItemAlreadyConsumedFromSlot                      = 20,
    ConsumedTooMuchFromSlot                          = 21,
    MismatchSlotExpectedConsumedItem                 = 22,
    MismatchSlotExpectedConsumedItemNetIdVariant     = 23,
    FailedToMatchExpectedSlotConsumedItem            = 24,
    FailedToMatchExpectedAllowedAnywhereConsumedItem = 25,
    ConsumedItemOutOfAllowedSlotRange                = 26,
    ConsumedItemNotAllowed                           = 27,
    PlayerNotInCreativeMode                          = 28,
    InvalidExperimentalRecipeRequest                 = 29,
    FailedToCraftCreative                            = 30,
    FailedToGetLevelRecipe                           = 31,
    FailedToFindRecipeByNetId                        = 32,
    MismatchedCraftingSize                           = 33,
    MissingInputSparseContainer                      = 34,
    MismatchedRecipeForInputGridItems                = 35,
    EmptyCraftResults                                = 36,
    FailedToEnchant                                  = 37,
    MissingInputItem                                 = 38,
    InsufficientPlayerLevelToEnchant                 = 39,
    MissingMaterialItem                              = 40,
    MissingActor                                     = 41,
    UnknownPrimaryEffect                             = 42,
    PrimaryEffectOutOfRange                          = 43,
    PrimaryEffectUnavailable                         = 44,
    SecondaryEffectOutOfRange                        = 45,
    SecondaryEffectUnavailable                       = 46,
    DstContainerEqualToCreatedOutputContainer        = 47,
    DstContainerAndSlotEqualToSrcContainerAndSlot    = 48,
    FailedToValidateSrcSlot                          = 49,
    FailedToValidateDstSlot                          = 50,
    InvalidAdjustedAmount                            = 51,
    InvalidItemSetType                               = 52,
    InvalidTransferAmount                            = 53,
    CannotSwapItem                                   = 54,
    CannotPlaceItem                                  = 55,
    UnhandledItemSetType                             = 56,
    InvalidRemovedAmount                             = 57,
    InvalidRegion                                    = 58,
    CannotDropItem                                   = 59,
    CannotDestroyItem                                = 60,
    InvalidSourceContainer                           = 61,
    ItemNotConsumed                                  = 62,
    InvalidNumCrafts                                 = 63,
    InvalidCraftResultStackSize                      = 64,
    CannotConsumeItem                                = 66,
    ScreenStackError                                 = 67,
};

// class CommandVersion {
// public:
//     int Min = 1, Max = 0x7FFFFFFF;
// };

enum class InventoryTransactionError {
    Unknown            = 0,
    NoError            = 1,
    BalanceMismatch    = 2,
    SourceItemMismatch = 3,
    InventoryMismatch  = 4,
    SizeMismatch       = 5,
    AuthorityMismatch  = 6,
    StateMismatch      = 7,
    ApiDenied          = 8
};

enum class InventorySourceType {
    Invalid                = -1,
    Container              = 0,
    Global                 = 1,
    World                  = 2,
    Creative               = 3,
    UntrackedInteractionUI = 100,
    NONIMPLEMENTEDTODO     = 99999
};
// clang-format on
template <typename T>
struct InvertableFilter {
    T value;
    bool inverted;
};

template <typename T>
class CommandSelectorResults {
public:
    std::shared_ptr<std::vector<T*>> data;

    auto begin() {
        return data->begin();
    }

    auto end() {
        return data->end();
    }

    auto count() const {
        return data->size();
    }

    auto empty() const {
        return data->empty();
    }
};

/*

enum class BlockActorType : int
{
    Furnace = 0x01,
    Chest = 0x02,
    NetherReactor = 0x03,
    Sign = 0x04,
    MobSpawner = 0x05,
    Skull = 0x06,
    FlowerPot = 0x07,
    BrewingStand = 0x08,
    EnchantTable = 0x09,
    DaylightDetector = 0x0A,
    Music = 0x0B,
    Comparator = 0x0C,
    Dispenser = 0x0D,
    Dropper = 0x0E,
    Hopper = 0x0F,
    Cauldron = 0x10,
    ItemFrame = 0x11,
    PistonArm = 0x12,
    MovingBlock = 0x13,
    ChalkboardBlock = 0x14,
    Beacon = 0x15,
    EndPortal = 0x16,
    EnderChest = 0x17,
    EndGateway = 0x18,
    ShulkerBox = 0x19,
    CommandBlock = 0x1A,
    Bed = 0x1B,
    Banner = 0x1C,
    StructureBlock = 0x20,
    Jukebox = 0x21,
    ChemistryTable = 0x22,
    Conduit = 0x23,
    JigsawBlock = 0x24,
    Lectern = 0x25,
    BlastFurnace = 0x26,
    Smoker = 0x27,
    Bell = 0x28,
    Campfire = 0x29,
    Barrel = 0x2A,
    Beehive = 0x2B,
    Lodestone = 0x2C,
    SculkSensor = 0x2D,
    SporeBlossom = 0x2E,
    GlowItemFrame = 0x2F,
    SculkCatalyst = 0x30,
    SculkShrieker = 0x31,
};

enum class ActorType;

*/
