#include <MC/Packet.hpp>
#include <MC/MinecraftPackets.hpp>
#include <LoggerAPI.h>

#define INCLUDE_ALL_PACKET
#define SIZE_STATIC_ASSERT_IF_DEFINE
//#define SIZE_STATIC_ASSERT
//#define GENERATE_PACKET
//#define FILL_PACKET

extern Logger logger;

#ifdef INCLUDE_ALL_PACKET

#include <MC/LoginPacket.hpp>
#include <MC/PlayStatusPacket.hpp>
#include <MC/ServerToClientHandshakePacket.hpp>
#include <MC/ClientToServerHandshakePacket.hpp>
#include <MC/DisconnectPacket.hpp>
#include <MC/ResourcePacksInfoPacket.hpp>
#include <MC/ResourcePackStackPacket.hpp>
#include <MC/ResourcePackClientResponsePacket.hpp>
#include <MC/TextPacket.hpp>
#include <MC/SetTimePacket.hpp>
#include <MC/StartGamePacket.hpp>
#include <MC/AddPlayerPacket.hpp>
#include <MC/AddActorPacket.hpp>
#include <MC/RemoveActorPacket.hpp>
#include <MC/AddItemActorPacket.hpp>
#include <MC/TakeItemActorPacket.hpp>
#include <MC/MoveActorAbsolutePacket.hpp>
#include <MC/MovePlayerPacket.hpp>
#include <MC/RiderJumpPacket.hpp>
#include <MC/UpdateBlockPacket.hpp>
#include <MC/AddPaintingPacket.hpp>
#include <MC/TickSyncPacket.hpp>
#include <MC/LevelSoundEventPacketV1.hpp>
#include <MC/LevelEventPacket.hpp>
#include <MC/BlockEventPacket.hpp>
#include <MC/ActorEventPacket.hpp>
#include <MC/MobEffectPacket.hpp>
#include <MC/UpdateAttributesPacket.hpp>
#include <MC/InventoryTransactionPacket.hpp>
#include <MC/MobEquipmentPacket.hpp>
#include <MC/MobArmorEquipmentPacket.hpp>
#include <MC/InteractPacket.hpp>
#include <MC/BlockPickRequestPacket.hpp>
#include <MC/ActorPickRequestPacket.hpp>
#include <MC/PlayerActionPacket.hpp>
#include <MC/HurtArmorPacket.hpp>
#include <MC/SetActorDataPacket.hpp>
#include <MC/SetActorMotionPacket.hpp>
#include <MC/SetActorLinkPacket.hpp>
#include <MC/SetHealthPacket.hpp>
#include <MC/SetSpawnPositionPacket.hpp>
#include <MC/AnimatePacket.hpp>
#include <MC/RespawnPacket.hpp>
#include <MC/ContainerOpenPacket.hpp>
#include <MC/ContainerClosePacket.hpp>
#include <MC/PlayerHotbarPacket.hpp>
#include <MC/InventoryContentPacket.hpp>
#include <MC/InventorySlotPacket.hpp>
#include <MC/ContainerSetDataPacket.hpp>
#include <MC/CraftingDataPacket.hpp>
#include <MC/CraftingEventPacket.hpp>
#include <MC/GuiDataPickItemPacket.hpp>
#include <MC/AdventureSettingsPacket.hpp>
#include <MC/BlockActorDataPacket.hpp>
#include <MC/PlayerInputPacket.hpp>
#include <MC/LevelChunkPacket.hpp>
#include <MC/SetCommandsEnabledPacket.hpp>
#include <MC/SetDifficultyPacket.hpp>
#include <MC/ChangeDimensionPacket.hpp>
#include <MC/SetPlayerGameTypePacket.hpp>
#include <MC/PlayerListPacket.hpp>
#include <MC/SimpleEventPacket.hpp>
#include <MC/EventPacket.hpp>
#include <MC/SpawnExperienceOrbPacket.hpp>
#include <MC/ClientboundMapItemDataPacket.hpp>
#include <MC/MapInfoRequestPacket.hpp>
#include <MC/RequestChunkRadiusPacket.hpp>
#include <MC/ChunkRadiusUpdatedPacket.hpp>
#include <MC/ItemFrameDropItemPacket.hpp>
#include <MC/GameRulesChangedPacket.hpp>
#include <MC/CameraPacket.hpp>
#include <MC/BossEventPacket.hpp>
#include <MC/ShowCreditsPacket.hpp>
#include <MC/AvailableCommandsPacket.hpp>
#include <MC/CommandRequestPacket.hpp>
#include <MC/CommandBlockUpdatePacket.hpp>
#include <MC/CommandOutputPacket.hpp>
#include <MC/UpdateTradePacket.hpp>
#include <MC/UpdateEquipPacket.hpp>
#include <MC/ResourcePackDataInfoPacket.hpp>
#include <MC/ResourcePackChunkDataPacket.hpp>
#include <MC/ResourcePackChunkRequestPacket.hpp>
#include <MC/TransferPacket.hpp>
#include <MC/PlaySoundPacket.hpp>
#include <MC/StopSoundPacket.hpp>
#include <MC/SetTitlePacket.hpp>
#include <MC/AddBehaviorTreePacket.hpp>
#include <MC/StructureBlockUpdatePacket.hpp>
#include <MC/ShowStoreOfferPacket.hpp>
#include <MC/PurchaseReceiptPacket.hpp>
#include <MC/PlayerSkinPacket.hpp>
#include <MC/SubClientLoginPacket.hpp>
#include <MC/AutomationClientConnectPacket.hpp>
#include <MC/SetLastHurtByPacket.hpp>
#include <MC/BookEditPacket.hpp>
#include <MC/NpcRequestPacket.hpp>
#include <MC/PhotoTransferPacket.hpp>
#include <MC/ModalFormRequestPacket.hpp>
#include <MC/ModalFormResponsePacket.hpp>
#include <MC/ServerSettingsRequestPacket.hpp>
#include <MC/ServerSettingsResponsePacket.hpp>
#include <MC/ShowProfilePacket.hpp>
#include <MC/SetDefaultGameTypePacket.hpp>
#include <MC/RemoveObjectivePacket.hpp>
#include <MC/SetDisplayObjectivePacket.hpp>
#include <MC/SetScorePacket.hpp>
#include <MC/LabTablePacket.hpp>
#include <MC/UpdateBlockSyncedPacket.hpp>
#include <MC/MoveActorDeltaPacket.hpp>
#include <MC/SetScoreboardIdentityPacket.hpp>
#include <MC/SetLocalPlayerAsInitializedPacket.hpp>
#include <MC/UpdateSoftEnumPacket.hpp>
#include <MC/NetworkStackLatencyPacket.hpp>
#include <MC/ScriptCustomEventPacket.hpp>
#include <MC/SpawnParticleEffectPacket.hpp>
#include <MC/AvailableActorIdentifiersPacket.hpp>
#include <MC/LevelSoundEventPacketV2.hpp>
#include <MC/NetworkChunkPublisherUpdatePacket.hpp>
#include <MC/BiomeDefinitionListPacket.hpp>
#include <MC/LevelSoundEventPacket.hpp>
#include <MC/LevelEventGenericPacket.hpp>
#include <MC/LecternUpdatePacket.hpp>
#include <MC/AddEntityPacket.hpp>
#include <MC/RemoveEntityPacket.hpp>
#include <MC/ClientCacheStatusPacket.hpp>
#include <MC/OnScreenTextureAnimationPacket.hpp>
#include <MC/MapCreateLockedCopyPacket.hpp>
#include <MC/StructureTemplateDataRequestPacket.hpp>
#include <MC/StructureTemplateDataResponsePacket.hpp>
#include <MC/ClientCacheBlobStatusPacket.hpp>
#include <MC/ClientCacheMissResponsePacket.hpp>
#include <MC/EducationSettingsPacket.hpp>
#include <MC/EmotePacket.hpp>
#include <MC/MultiplayerSettingsPacket.hpp>
#include <MC/SettingsCommandPacket.hpp>
#include <MC/AnvilDamagePacket.hpp>
#include <MC/CompletedUsingItemPacket.hpp>
#include <MC/NetworkSettingsPacket.hpp>
#include <MC/PlayerAuthInputPacket.hpp>
#include <MC/CreativeContentPacket.hpp>
#include <MC/PlayerEnchantOptionsPacket.hpp>
#include <MC/ItemStackRequestPacket.hpp>
#include <MC/ItemStackResponsePacket.hpp>
#include <MC/PlayerArmorDamagePacket.hpp>
#include <MC/CodeBuilderPacket.hpp>
#include <MC/UpdatePlayerGameTypePacket.hpp>
#include <MC/EmoteListPacket.hpp>
#include <MC/PositionTrackingDBServerBroadcastPacket.hpp>
#include <MC/PositionTrackingDBClientRequestPacket.hpp>
#include <MC/DebugInfoPacket.hpp>
#include <MC/PacketViolationWarningPacket.hpp>
#include <MC/MotionPredictionHintsPacket.hpp>
#include <MC/AnimateEntityPacket.hpp>
#include <MC/CameraShakePacket.hpp>
#include <MC/PlayerFogPacket.hpp>
#include <MC/CorrectPlayerMovePredictionPacket.hpp>
#include <MC/ItemComponentPacket.hpp>
#include <MC/FilterTextPacket.hpp>

#endif INCLUDE_ALL_PACKET

#pragma region ForEachPacketMacro


#define ForEachPacket(Func)                        \
    Func(ShowProfilePacket);                       \
    Func(SetDefaultGameTypePacket);                \
    Func(RemoveObjectivePacket);                   \
    Func(CodeBuilderPacket);                       \
    Func(NetworkSettingsPacket);                   \
    Func(MultiplayerSettingsPacket);               \
    Func(SettingsCommandPacket);                   \
    Func(MapCreateLockedCopyPacket);               \
    Func(AddEntityPacket);                         \
    Func(RemoveEntityPacket);                      \
    Func(LevelSoundEventPacketV2);                 \
    Func(ModalFormRequestPacket);                  \
    Func(ModalFormResponsePacket);                 \
    Func(ServerSettingsRequestPacket);             \
    Func(ClientToServerHandshakePacket);           \
    Func(ServerToClientHandshakePacket);           \
    Func(SetTimePacket);                           \
    Func(RemoveActorPacket);                       \
    Func(LevelSoundEventPacketV1);                 \
    Func(SetCommandsEnabledPacket);                \
    Func(SetPlayerGameTypePacket);                 \
    Func(RequestChunkRadiusPacket);                \
    Func(ChunkRadiusUpdatedPacket);                \
    Func(SetLastHurtByPacket);                     \
    Func(AutomationClientConnectPacket);           \
    Func(StopSoundPacket);                         \
    Func(PlayerArmorDamagePacket);                 \
    Func(ActorPickRequestPacket);                  \
    Func(AddPaintingPacket);                       \
    Func(StructureTemplateDataResponsePacket);     \
    Func(TransferPacket);                          \
    Func(UpdateEquipPacket);                       \
    Func(UpdateSoftEnumPacket);                    \
    Func(UpdateTradePacket);                       \
    Func(CameraPacket);                            \
    Func(MobArmorEquipmentPacket);                 \
    Func(MobEffectPacket);                         \
    Func(MoveActorAbsolutePacket);                 \
    Func(NetworkStackLatencyPacket);               \
    Func(NpcRequestPacket);                        \
    Func(OnScreenTextureAnimationPacket);          \
    Func(PacketViolationWarningPacket);            \
    Func(PhotoTransferPacket);                     \
    Func(PlaySoundPacket);                         \
    Func(AnvilDamagePacket);                       \
    Func(BlockEventPacket);                        \
    Func(BookEditPacket);                          \
    Func(BossEventPacket);                         \
    Func(ClientboundMapItemDataPacket);            \
    Func(CommandBlockUpdatePacket);                \
    Func(CompletedUsingItemPacket);                \
    Func(ContainerSetDataPacket);                  \
    Func(CraftingEventPacket);                     \
    Func(DebugInfoPacket);                         \
    Func(EducationSettingsPacket);                 \
    Func(EmoteListPacket);                         \
    Func(EmotePacket);                             \
    Func(HurtArmorPacket);                         \
    Func(ItemFrameDropItemPacket);                 \
    Func(LabTablePacket);                          \
    Func(LecternUpdatePacket);                     \
    Func(LevelEventGenericPacket);                 \
    Func(PlayerEnchantOptionsPacket);              \
    Func(PlayerInputPacket);                       \
    Func(PlayerSkinPacket);                        \
    Func(PositionTrackingDBClientRequestPacket);   \
    Func(PositionTrackingDBServerBroadcastPacket); \
    Func(PurchaseReceiptPacket);                   \
    Func(ResourcePackChunkDataPacket);             \
    Func(ResourcePackChunkRequestPacket);          \
    Func(ResourcePackDataInfoPacket);              \
    Func(ScriptCustomEventPacket);                 \
    Func(SetDisplayObjectivePacket);               \
    Func(SetScorePacket);                          \
    Func(SetScoreboardIdentityPacket);             \
    Func(SetTitlePacket);                          \
    Func(ShowCreditsPacket);                       \
    Func(ShowStoreOfferPacket);                    \
    Func(SpawnExperienceOrbPacket);                \
    Func(SpawnParticleEffectPacket);               \
    Func(StructureBlockUpdatePacket);              \
    Func(StructureTemplateDataRequestPacket);      \
    Func(SubClientLoginPacket);                    \
    Func(SimpleEventPacket);                       \
    Func(AddBehaviorTreePacket);                   \
    Func(AvailableActorIdentifiersPacket);         \
    Func(AvailableCommandsPacket);                 \
    Func(BiomeDefinitionListPacket);               \
    Func(CraftingDataPacket);                      \
    Func(CreativeContentPacket);                   \
    Func(GameRulesChangedPacket);                  \
    Func(ResourcePackStackPacket);                 \
    Func(ResourcePacksInfoPacket);                 \
    Func(SetSpawnPositionPacket);                  \
    Func(StartGamePacket);                         \
    Func(AddPlayerPacket);                         \
    Func(LoginPacket);                             \
    Func(BlockPickRequestPacket);                  \
    Func(DisconnectPacket);                        \
    Func(GuiDataPickItemPacket);                   \
    Func(SetLocalPlayerAsInitializedPacket);       \
    Func(TextPacket);                              \
    Func(PlayerListPacket);                        \
    Func(PlayStatusPacket);                        \
    Func(ClientCacheStatusPacket);                 \
    Func(SetDifficultyPacket);                     \
    Func(ChangeDimensionPacket);                   \
    Func(ResourcePackClientResponsePacket);        \
    Func(SetActorLinkPacket);                      \
    Func(UpdatePlayerGameTypePacket);              \
    Func(RespawnPacket);                           \
    Func(TakeItemActorPacket);                     \
    Func(PlayerHotbarPacket);                      \
    Func(CommandOutputPacket);                     \
    Func(TickSyncPacket);                          \
    Func(CommandRequestPacket);                    \
    Func(ContainerOpenPacket);                     \
    Func(ContainerClosePacket);                    \
    Func(InventoryContentPacket);                  \
    Func(ServerSettingsResponsePacket);            \
    Func(InventorySlotPacket);                     \
    Func(UpdateBlockSyncedPacket);                 \
    Func(PlayerActionPacket);                      \
    Func(ItemStackRequestPacket);                  \
    Func(ItemStackResponsePacket);                 \
    Func(AdventureSettingsPacket);                 \
    Func(BlockActorDataPacket);                    \
    Func(EventPacket);                             \
    Func(SetHealthPacket);                         \
    Func(MobEquipmentPacket);                      \
    Func(AddItemActorPacket);                      \
    Func(UpdateAttributesPacket);                  \
    Func(InteractPacket);                          \
    Func(ActorEventPacket);                        \
    Func(LevelEventPacket);                        \
    Func(NetworkChunkPublisherUpdatePacket);       \
    Func(AnimatePacket);                           \
    Func(InventoryTransactionPacket);              \
    Func(AddActorPacket);                          \
    Func(MapInfoRequestPacket);                    \
    Func(SetActorMotionPacket);                    \
    Func(LevelSoundEventPacket);                   \
    Func(ClientCacheMissResponsePacket);           \
    Func(ClientCacheBlobStatusPacket);             \
    Func(LevelChunkPacket);                        \
    Func(SetActorDataPacket);                      \
    Func(UpdateBlockPacket);                       \
    Func(MoveActorDeltaPacket);                    \
    Func(MovePlayerPacket);                        \
    Func(PlayerAuthInputPacket);                   \
    Func(MotionPredictionHintsPacket);             \
    Func(AnimateEntityPacket);                     \
    Func(CameraShakePacket);                       \
    Func(PlayerFogPacket);                         \
    Func(CorrectPlayerMovePredictionPacket);       \
    Func(RiderJump);                               \
    Func(ItemComponentPacket);                     \
    Func(FilterTextPacket);


    // /*Func(TickingAreasLoadStatusPacket);*/            \
    // /*Func(DimensionDataPacket);*/                     \
    // /*Func(AgentActionEventPacket);*/                  \
    // /*Func(ChangeMobPropertyPacket);*/                 \
    // /*Func(ChangeMobPropertyPacket);*/                 \
    // /*Func(LessonProgressPacket);*/                    \
    // /*Func(RequestAbilityPacket);*/                    \
    // /*Func(RequestPermissionsPacket);*/                \
    // /*Func(ToastRequestPacket);*/                      \
    // /*Func(UpdateAbilitiesPacket);*/                   \
    // /*Func(UpdateAdventureSettingsPacket);*/           \
    // /*Func(EditorNetworkPacket);*/                     \
    // /*Func(DeathInfoPacket);*/                         \
    // /*Func(FeatureRegistryPacket);*/                   \
    // /*Func(MotionPredictionHintsPacket);*/             \
    // /*Func(AnimateEntityPacket);*/                     \
    // /*Func(CameraShakePacket);*/                       \
    // /*Func(PlayerFogPacket);*/                         \
    // /*Func(CorrectPlayerMovePredictionPacket);*/       \
    // /*Func(ItemComponentPacket);*/                     \
    // /*Func(FilterTextPacket);*/                        \
    // /*Func(ClientboundDebugRendererPacket);*/          \
    // /*Func(SyncActorPropertyPacket);*/                 \
    // /*Func(SubChunkPacket);*/                          \
    // /*Func(SubChunkRequestPacket);*/                   \
    // /*Func(UpdateSubChunkBlocksPacket);*/              \
    // /*Func(CreatePhotoPacket);*/                       \
    // /*Func(EduUriResourcePacket);*/                    \
    // /*Func(NpcDialoguePacket);*/                       \
    // /*Func(SimulationTypePacket);*/                    \
    // /*Func(AddVolumeEntityPacket);*/                   \
    // /*Func(CodeBuilderSourcePacket);*/                 \
    // /*Func(PlayerStartItemCooldownPacket);*/           \
    // /*Func(ScriptMessagePacket);*/                     \
    // /*Func(RemoveVolumeEntityPacket);*/                \
    // Func(PassengerJumpPacket);                     \

#define DeclearClass(packet) class packet;

ForEachPacket(DeclearClass);

#pragma endregion

#ifdef GENERATE_PACKET

template <typename T>
inline void* VFTABLE_ADDR;
template <typename T>
inline size_t PACKET_SIZE;

inline void __initPacketVftable() {
    static bool inited = false;
    if (inited)
        return;
    inited = true;
#define INIT_ADDR(type) \
    VFTABLE_ADDR<type> = dlsym_real("??_7" #type "@@6B@");

    ForEachPacket(INIT_ADDR);

#undef INIT_ADDR
}

template <typename T>
inline void* getVftableAddr() {
    __initPacketVftable();
    return VFTABLE_ADDR<T>;
}

void __initPacketSize() {
    static bool inited = false;
    if (inited)
        return;
    inited = true;
#define SET_PACKET_SIZE(type)                              \
    if (getVftableAddr<type>() == *(void**)packet.get()) { \
        PACKET_SIZE<type> = size - 16;                     \
        continue;                                          \
    }
    int packetId = -1;
    while (packetId < 200) {
        auto packet = MinecraftPackets::createPacket(++packetId);
        if (packet) {
            auto size = _msize((void**)packet.get() - 2);

            ForEachPacket(SET_PACKET_SIZE);
            __debugbreak();
        }
    }
#undef SET_PACKET_SIZE
}

std::string getClassName(Packet* packet) {
#define RETURN_IF_FIND(type)                             \
    if (getVftableAddr<class type>() == *(void**)packet) \
        return #type;
    ForEachPacket(RETURN_IF_FIND);
    __debugbreak();
    return fmt::format("Unknown({})", packet->getId());
#undef RETURN_IF_FIND
}

inline void forEachPacket(std::function<void(Packet const& packet, std::string className, size_t size)> callback) {
    int packetId = 0;
    while (packetId < 200) {
        auto packet = MinecraftPackets::createPacket(packetId);
        if (packet) {
            auto size = _msize((void**)packet.get() - 2);
            // logger.warn("Packet: {},{},{},{},{}", magic_enum::enum_name((MinecraftPacketIds)packetId), packet->getName(), getClassName(packet.get()), packetId, size);

            auto className = getClassName(packet.get());
            callback(*packet, className, size - 16);
        }
        packetId++;
    }
}

template <typename T>
inline size_t getPacketSize() {
    __initPacketSize();
    return PACKET_SIZE<T>;
}

#pragma region Packet Command

#include <DynamicCommandAPI.h>
#include <MC/Minecraft.hpp>
#include <filesystem>
#include <Utils/FileHelper.h>
using Param = DynamicCommand::ParameterData;
using ParamType = DynamicCommand::ParameterType;
using ParamIndex = DynamicCommandInstance::ParameterIndex;
using Result = DynamicCommand::Result;

inline bool replaceString(std::string& content, std::string const& start, std::string const& end, std::string const& str, size_t offset = 0, bool exclude = true) {
    auto startOffset = content.find(start, offset);
    if (startOffset == content.npos)
        return false;
    if (exclude)
        startOffset += start.size();
    auto endOffset = end.empty() ? content.npos : content.find(end, startOffset);

    if (endOffset != content.npos && !exclude) {
        endOffset += sizeof(end);
    }
    content.replace(startOffset, endOffset - startOffset, str);
    return true;
}

void autoGenerate() {
    auto file = ReadAllFile(__FILE__, false);
    if (!file)
        __debugbreak();
    auto& content = file.value();

    std::ostringstream oss;

    // add static assert
    oss << std::endl;
    forEachPacket([&](Packet const& packet, std::string className, size_t size) {
        oss << fmt::format("static_assert(sizeof({}) == 0x{:X}, \"size of {} should be {}\");\n", className, size, className, size);
    });
    oss << std::endl;
    replaceString(content, "#ifdef SIZE_STATIC_ASSERT\n", "#endif", oss.str());
    oss.clear();
    oss.str("");

    oss << std::endl;
    forEachPacket([&](Packet const& packet, std::string className, size_t size) {
        oss << fmt::format("static_assert(sizeof({}) == 0x{:X} || sizeof({}) == 48, \"size of {} should be {} or 48(default)\");\n", className, size, className, className, size);
    });
    oss << std::endl;
    replaceString(content, "#ifdef SIZE_STATIC_ASSERT_IF_DEFINE\n", "#endif", oss.str());
    oss.clear();
    oss.str("");

    // add include
    oss << std::endl;
    forEachPacket([&](Packet const& packet, std::string className, size_t size) {
        oss << fmt::format("#include <MC/{}.hpp>\n", className);
    });
    oss << std::endl;
    replaceString(content, "#ifdef INCLUDE_ALL_PACKET\n", "#endif", oss.str());
    oss.clear();
    oss.str("");

    WriteAllFile(__FILE__, content, false);
}
template <typename T>
void __autoFill(std::string const& className) {
    if (sizeof(T) == getPacketSize<T>())
        return;

    std::filesystem::path McDir = std::filesystem::path(__FILEW__).parent_path().parent_path().parent_path().append("Header").append("MC");

    std::filesystem::path filePath = McDir.append(fmt::format("{}.hpp", className));
    auto file = ReadAllFile(filePath.string());
    if (!file) {
        __debugbreak();
        return;
    }
    auto& content = file.value();
    size_t fillerSize = getPacketSize<T>() - sizeof(T);
    std::string filler = fmt::format("    char filler[{}];\n", getPacketSize<T>() - 48);

    auto startOffset = content.find("// Add Member There");
    if (startOffset == content.npos) {
        startOffset = content.find("#define AFTER_EXTRA");
        if (startOffset == content.npos) {
            __debugbreak();
            return;
        }
        filler = "// Add Member There\n" + filler;
    }

    startOffset += std::string("// Add Member There").size() + 1;
    auto endOffset = content.find("#undef", startOffset);

    if (sizeof(T) != 48) {
        replaceString(content, "filler[", "]", std::to_string(getPacketSize<T>() - 48));
    } else {
        if (content.substr(startOffset, endOffset - startOffset) != "\n") {
            startOffset = content.find("\n\n", startOffset) + 1;
            __debugbreak();
        }
        content.insert(startOffset, filler);
    }
    logger.warn("add or change filler in file {}, size: {} ", filePath.filename().string(), getPacketSize<T>() - 48);
    WriteAllFile(filePath.string(), content);
    return;
}
void autoFill() {
#ifdef FILL_PACKET

#define AUTO_FILL(type) \
    __autoFill<type>(#type);
    ForEachPacket(AUTO_FILL);
#undef AUTO_FILL;

#endif // FILL_PACKET
}

void onExecute(DynamicCommand const& cmd, CommandOrigin const& origin, CommandOutput& output,
               std::unordered_map<std::string, Result>& results) {
    autoGenerate();
    autoFill();
    output.success("Generate finished");
}

TClasslessInstanceHook2("SetupPacketCommand_startServerThread", void, "?startServerThread@ServerInstance@@QEAAXXZ") {
    original(this);
    Global<Level> = Global<Minecraft>->getLevel();
    autoGenerate();
    autoFill();

    auto command = DynamicCommand::createCommand("pkt", "packet");
    command->addOverload();
    command->setCallback(onExecute);
    DynamicCommand::setup(std::move(command));
}

#pragma endregion

#endif // GENERATE_PACKET

#ifdef SIZE_STATIC_ASSERT

static_assert(sizeof(LoginPacket) == 0x38, "size of LoginPacket should be 56");
static_assert(sizeof(PlayStatusPacket) == 0x30, "size of PlayStatusPacket should be 48");
static_assert(sizeof(ServerToClientHandshakePacket) == 0x48, "size of ServerToClientHandshakePacket should be 72");
static_assert(sizeof(ClientToServerHandshakePacket) == 0x28, "size of ClientToServerHandshakePacket should be 40");
static_assert(sizeof(DisconnectPacket) == 0x50, "size of DisconnectPacket should be 80");
static_assert(sizeof(ResourcePacksInfoPacket) == 0x60, "size of ResourcePacksInfoPacket should be 96");
static_assert(sizeof(ResourcePackStackPacket) == 0xF8, "size of ResourcePackStackPacket should be 248");
static_assert(sizeof(ResourcePackClientResponsePacket) == 0x40, "size of ResourcePackClientResponsePacket should be 64");
static_assert(sizeof(TextPacket) == 0xD0, "size of TextPacket should be 208");
static_assert(sizeof(SetTimePacket) == 0x30, "size of SetTimePacket should be 48");
static_assert(sizeof(StartGamePacket) == 0x4E0, "size of StartGamePacket should be 1248");
static_assert(sizeof(AddPlayerPacket) == 0x2E0, "size of AddPlayerPacket should be 736");
static_assert(sizeof(AddActorPacket) == 0x178, "size of AddActorPacket should be 376");
static_assert(sizeof(RemoveActorPacket) == 0x30, "size of RemoveActorPacket should be 48");
static_assert(sizeof(AddItemActorPacket) == 0x108, "size of AddItemActorPacket should be 264");
static_assert(sizeof(TakeItemActorPacket) == 0x38, "size of TakeItemActorPacket should be 56");
static_assert(sizeof(MoveActorAbsolutePacket) == 0x48, "size of MoveActorAbsolutePacket should be 72");
static_assert(sizeof(MovePlayerPacket) == 0x68, "size of MovePlayerPacket should be 104");
static_assert(sizeof(Unknown(20)) == 0x30, "size of Unknown(20) should be 48");
static_assert(sizeof(UpdateBlockPacket) == 0x40, "size of UpdateBlockPacket should be 64");
static_assert(sizeof(AddPaintingPacket) == 0x68, "size of AddPaintingPacket should be 104");
static_assert(sizeof(TickSyncPacket) == 0x38, "size of TickSyncPacket should be 56");
static_assert(sizeof(LevelSoundEventPacketV1) == 0x48, "size of LevelSoundEventPacketV1 should be 72");
static_assert(sizeof(LevelEventPacket) == 0x40, "size of LevelEventPacket should be 64");
static_assert(sizeof(BlockEventPacket) == 0x40, "size of BlockEventPacket should be 64");
static_assert(sizeof(ActorEventPacket) == 0x38, "size of ActorEventPacket should be 56");
static_assert(sizeof(MobEffectPacket) == 0x48, "size of MobEffectPacket should be 72");
static_assert(sizeof(UpdateAttributesPacket) == 0x50, "size of UpdateAttributesPacket should be 80");
static_assert(sizeof(InventoryTransactionPacket) == 0x58, "size of InventoryTransactionPacket should be 88");
static_assert(sizeof(MobEquipmentPacket) == 0xD0, "size of MobEquipmentPacket should be 208");
static_assert(sizeof(MobArmorEquipmentPacket) == 0x270, "size of MobArmorEquipmentPacket should be 624");
static_assert(sizeof(InteractPacket) == 0x48, "size of InteractPacket should be 72");
static_assert(sizeof(BlockPickRequestPacket) == 0x38, "size of BlockPickRequestPacket should be 56");
static_assert(sizeof(ActorPickRequestPacket) == 0x38, "size of ActorPickRequestPacket should be 56");
static_assert(sizeof(PlayerActionPacket) == 0x48, "size of PlayerActionPacket should be 72");
static_assert(sizeof(HurtArmorPacket) == 0x30, "size of HurtArmorPacket should be 48");
static_assert(sizeof(SetActorDataPacket) == 0x50, "size of SetActorDataPacket should be 80");
static_assert(sizeof(SetActorMotionPacket) == 0x40, "size of SetActorMotionPacket should be 64");
static_assert(sizeof(SetActorLinkPacket) == 0x48, "size of SetActorLinkPacket should be 72");
static_assert(sizeof(SetHealthPacket) == 0x30, "size of SetHealthPacket should be 48");
static_assert(sizeof(SetSpawnPositionPacket) == 0x48, "size of SetSpawnPositionPacket should be 72");
static_assert(sizeof(AnimatePacket) == 0x38, "size of AnimatePacket should be 56");
static_assert(sizeof(RespawnPacket) == 0x40, "size of RespawnPacket should be 64");
static_assert(sizeof(ContainerOpenPacket) == 0x40, "size of ContainerOpenPacket should be 64");
static_assert(sizeof(ContainerClosePacket) == 0x30, "size of ContainerClosePacket should be 48");
static_assert(sizeof(PlayerHotbarPacket) == 0x30, "size of PlayerHotbarPacket should be 48");
static_assert(sizeof(InventoryContentPacket) == 0x48, "size of InventoryContentPacket should be 72");
static_assert(sizeof(InventorySlotPacket) == 0xC0, "size of InventorySlotPacket should be 192");
static_assert(sizeof(ContainerSetDataPacket) == 0x38, "size of ContainerSetDataPacket should be 56");
static_assert(sizeof(CraftingDataPacket) == 0x78, "size of CraftingDataPacket should be 120");
static_assert(sizeof(CraftingEventPacket) == 0x70, "size of CraftingEventPacket should be 112");
static_assert(sizeof(GuiDataPickItemPacket) == 0x70, "size of GuiDataPickItemPacket should be 112");
static_assert(sizeof(AdventureSettingsPacket) == 0x48, "size of AdventureSettingsPacket should be 72");
static_assert(sizeof(BlockActorDataPacket) == 0x50, "size of BlockActorDataPacket should be 80");
static_assert(sizeof(PlayerInputPacket) == 0x38, "size of PlayerInputPacket should be 56");
static_assert(sizeof(LevelChunkPacket) == 0x78, "size of LevelChunkPacket should be 120");
static_assert(sizeof(SetCommandsEnabledPacket) == 0x30, "size of SetCommandsEnabledPacket should be 48");
static_assert(sizeof(SetDifficultyPacket) == 0x30, "size of SetDifficultyPacket should be 48");
static_assert(sizeof(ChangeDimensionPacket) == 0x40, "size of ChangeDimensionPacket should be 64");
static_assert(sizeof(SetPlayerGameTypePacket) == 0x30, "size of SetPlayerGameTypePacket should be 48");
static_assert(sizeof(PlayerListPacket) == 0x48, "size of PlayerListPacket should be 72");
static_assert(sizeof(SimpleEventPacket) == 0x30, "size of SimpleEventPacket should be 48");
static_assert(sizeof(EventPacket) == 0xF8, "size of EventPacket should be 248");
static_assert(sizeof(SpawnExperienceOrbPacket) == 0x38, "size of SpawnExperienceOrbPacket should be 56");
static_assert(sizeof(ClientboundMapItemDataPacket) == 0xB0, "size of ClientboundMapItemDataPacket should be 176");
static_assert(sizeof(MapInfoRequestPacket) == 0x30, "size of MapInfoRequestPacket should be 48");
static_assert(sizeof(RequestChunkRadiusPacket) == 0x30, "size of RequestChunkRadiusPacket should be 48");
static_assert(sizeof(ChunkRadiusUpdatedPacket) == 0x30, "size of ChunkRadiusUpdatedPacket should be 48");
static_assert(sizeof(ItemFrameDropItemPacket) == 0x38, "size of ItemFrameDropItemPacket should be 56");
static_assert(sizeof(GameRulesChangedPacket) == 0x40, "size of GameRulesChangedPacket should be 64");
static_assert(sizeof(CameraPacket) == 0x38, "size of CameraPacket should be 56");
static_assert(sizeof(BossEventPacket) == 0x78, "size of BossEventPacket should be 120");
static_assert(sizeof(ShowCreditsPacket) == 0x38, "size of ShowCreditsPacket should be 56");
static_assert(sizeof(AvailableCommandsPacket) == 0xB8, "size of AvailableCommandsPacket should be 184");
static_assert(sizeof(CommandRequestPacket) == 0x90, "size of CommandRequestPacket should be 144");
static_assert(sizeof(CommandBlockUpdatePacket) == 0xA8, "size of CommandBlockUpdatePacket should be 168");
static_assert(sizeof(CommandOutputPacket) == 0x98, "size of CommandOutputPacket should be 152");
static_assert(sizeof(UpdateTradePacket) == 0x88, "size of UpdateTradePacket should be 136");
static_assert(sizeof(UpdateEquipPacket) == 0x50, "size of UpdateEquipPacket should be 80");
static_assert(sizeof(ResourcePackDataInfoPacket) == 0x80, "size of ResourcePackDataInfoPacket should be 128");
static_assert(sizeof(ResourcePackChunkDataPacket) == 0x70, "size of ResourcePackChunkDataPacket should be 112");
static_assert(sizeof(ResourcePackChunkRequestPacket) == 0x50, "size of ResourcePackChunkRequestPacket should be 80");
static_assert(sizeof(TransferPacket) == 0x50, "size of TransferPacket should be 80");
static_assert(sizeof(PlaySoundPacket) == 0x60, "size of PlaySoundPacket should be 96");
static_assert(sizeof(StopSoundPacket) == 0x50, "size of StopSoundPacket should be 80");
static_assert(sizeof(SetTitlePacket) == 0x60, "size of SetTitlePacket should be 96");
static_assert(sizeof(AddBehaviorTreePacket) == 0x48, "size of AddBehaviorTreePacket should be 72");
static_assert(sizeof(StructureBlockUpdatePacket) == 0xE8, "size of StructureBlockUpdatePacket should be 232");
static_assert(sizeof(ShowStoreOfferPacket) == 0x70, "size of ShowStoreOfferPacket should be 112");
static_assert(sizeof(PurchaseReceiptPacket) == 0x40, "size of PurchaseReceiptPacket should be 64");
static_assert(sizeof(PlayerSkinPacket) == 0x248, "size of PlayerSkinPacket should be 584");
static_assert(sizeof(SubClientLoginPacket) == 0x30, "size of SubClientLoginPacket should be 48");
static_assert(sizeof(AutomationClientConnectPacket) == 0x48, "size of AutomationClientConnectPacket should be 72");
static_assert(sizeof(SetLastHurtByPacket) == 0x30, "size of SetLastHurtByPacket should be 48");
static_assert(sizeof(BookEditPacket) == 0x98, "size of BookEditPacket should be 152");
static_assert(sizeof(NpcRequestPacket) == 0x60, "size of NpcRequestPacket should be 96");
static_assert(sizeof(PhotoTransferPacket) == 0x88, "size of PhotoTransferPacket should be 136");
static_assert(sizeof(ModalFormRequestPacket) == 0x50, "size of ModalFormRequestPacket should be 80");
static_assert(sizeof(ModalFormResponsePacket) == 0x50, "size of ModalFormResponsePacket should be 80");
static_assert(sizeof(ServerSettingsRequestPacket) == 0x28, "size of ServerSettingsRequestPacket should be 40");
static_assert(sizeof(ServerSettingsResponsePacket) == 0x50, "size of ServerSettingsResponsePacket should be 80");
static_assert(sizeof(ShowProfilePacket) == 0x48, "size of ShowProfilePacket should be 72");
static_assert(sizeof(SetDefaultGameTypePacket) == 0x30, "size of SetDefaultGameTypePacket should be 48");
static_assert(sizeof(RemoveObjectivePacket) == 0x48, "size of RemoveObjectivePacket should be 72");
static_assert(sizeof(SetDisplayObjectivePacket) == 0xB0, "size of SetDisplayObjectivePacket should be 176");
static_assert(sizeof(SetScorePacket) == 0x48, "size of SetScorePacket should be 72");
static_assert(sizeof(LabTablePacket) == 0x40, "size of LabTablePacket should be 64");
static_assert(sizeof(UpdateBlockSyncedPacket) == 0x50, "size of UpdateBlockSyncedPacket should be 80");
static_assert(sizeof(MoveActorDeltaPacket) == 0x68, "size of MoveActorDeltaPacket should be 104");
static_assert(sizeof(SetScoreboardIdentityPacket) == 0x48, "size of SetScoreboardIdentityPacket should be 72");
static_assert(sizeof(SetLocalPlayerAsInitializedPacket) == 0x30, "size of SetLocalPlayerAsInitializedPacket should be 48");
static_assert(sizeof(UpdateSoftEnumPacket) == 0x68, "size of UpdateSoftEnumPacket should be 104");
static_assert(sizeof(NetworkStackLatencyPacket) == 0x38, "size of NetworkStackLatencyPacket should be 56");
static_assert(sizeof(ScriptCustomEventPacket) == 0x58, "size of ScriptCustomEventPacket should be 88");
static_assert(sizeof(SpawnParticleEffectPacket) == 0x68, "size of SpawnParticleEffectPacket should be 104");
static_assert(sizeof(AvailableActorIdentifiersPacket) == 0x40, "size of AvailableActorIdentifiersPacket should be 64");
static_assert(sizeof(LevelSoundEventPacketV2) == 0x68, "size of LevelSoundEventPacketV2 should be 104");
static_assert(sizeof(NetworkChunkPublisherUpdatePacket) == 0x38, "size of NetworkChunkPublisherUpdatePacket should be 56");
static_assert(sizeof(BiomeDefinitionListPacket) == 0x40, "size of BiomeDefinitionListPacket should be 64");
static_assert(sizeof(LevelSoundEventPacket) == 0x68, "size of LevelSoundEventPacket should be 104");
static_assert(sizeof(LevelEventGenericPacket) == 0x38, "size of LevelEventGenericPacket should be 56");
static_assert(sizeof(LecternUpdatePacket) == 0x40, "size of LecternUpdatePacket should be 64");
static_assert(sizeof(AddEntityPacket) == 0x30, "size of AddEntityPacket should be 48");
static_assert(sizeof(RemoveEntityPacket) == 0x30, "size of RemoveEntityPacket should be 48");
static_assert(sizeof(ClientCacheStatusPacket) == 0x30, "size of ClientCacheStatusPacket should be 48");
static_assert(sizeof(OnScreenTextureAnimationPacket) == 0x30, "size of OnScreenTextureAnimationPacket should be 48");
static_assert(sizeof(MapCreateLockedCopyPacket) == 0x38, "size of MapCreateLockedCopyPacket should be 56");
static_assert(sizeof(StructureTemplateDataRequestPacket) == 0xC0, "size of StructureTemplateDataRequestPacket should be 192");
static_assert(sizeof(StructureTemplateDataResponsePacket) == 0x58, "size of StructureTemplateDataResponsePacket should be 88");
static_assert(sizeof(ClientCacheBlobStatusPacket) == 0x58, "size of ClientCacheBlobStatusPacket should be 88");
static_assert(sizeof(ClientCacheMissResponsePacket) == 0x80, "size of ClientCacheMissResponsePacket should be 128");
static_assert(sizeof(EducationSettingsPacket) == 0xE0, "size of EducationSettingsPacket should be 224");
static_assert(sizeof(EmotePacket) == 0x58, "size of EmotePacket should be 88");
static_assert(sizeof(MultiplayerSettingsPacket) == 0x30, "size of MultiplayerSettingsPacket should be 48");
static_assert(sizeof(SettingsCommandPacket) == 0x50, "size of SettingsCommandPacket should be 80");
static_assert(sizeof(AnvilDamagePacket) == 0x38, "size of AnvilDamagePacket should be 56");
static_assert(sizeof(CompletedUsingItemPacket) == 0x30, "size of CompletedUsingItemPacket should be 48");
static_assert(sizeof(NetworkSettingsPacket) == 0x30, "size of NetworkSettingsPacket should be 48");
static_assert(sizeof(PlayerAuthInputPacket) == 0x78, "size of PlayerAuthInputPacket should be 120");
static_assert(sizeof(CreativeContentPacket) == 0x48, "size of CreativeContentPacket should be 72");
static_assert(sizeof(PlayerEnchantOptionsPacket) == 0x40, "size of PlayerEnchantOptionsPacket should be 64");
static_assert(sizeof(ItemStackRequestPacket) == 0x30, "size of ItemStackRequestPacket should be 48");
static_assert(sizeof(ItemStackResponsePacket) == 0x40, "size of ItemStackResponsePacket should be 64");
static_assert(sizeof(PlayerArmorDamagePacket) == 0x38, "size of PlayerArmorDamagePacket should be 56");
static_assert(sizeof(CodeBuilderPacket) == 0x50, "size of CodeBuilderPacket should be 80");
static_assert(sizeof(UpdatePlayerGameTypePacket) == 0x38, "size of UpdatePlayerGameTypePacket should be 56");
static_assert(sizeof(EmoteListPacket) == 0x48, "size of EmoteListPacket should be 72");
static_assert(sizeof(PositionTrackingDBServerBroadcastPacket) == 0x48, "size of PositionTrackingDBServerBroadcastPacket should be 72");
static_assert(sizeof(PositionTrackingDBClientRequestPacket) == 0x30, "size of PositionTrackingDBClientRequestPacket should be 48");
static_assert(sizeof(DebugInfoPacket) == 0x50, "size of DebugInfoPacket should be 80");
static_assert(sizeof(PacketViolationWarningPacket) == 0x58, "size of PacketViolationWarningPacket should be 88");
static_assert(sizeof(MotionPredictionHintsPacket) == 0x40, "size of MotionPredictionHintsPacket should be 64");
static_assert(sizeof(AnimateEntityPacket) == 0xC8, "size of AnimateEntityPacket should be 200");
static_assert(sizeof(CameraShakePacket) == 0x38, "size of CameraShakePacket should be 56");
static_assert(sizeof(PlayerFogPacket) == 0x40, "size of PlayerFogPacket should be 64");
static_assert(sizeof(CorrectPlayerMovePredictionPacket) == 0x50, "size of CorrectPlayerMovePredictionPacket should be 80");
static_assert(sizeof(ItemComponentPacket) == 0x40, "size of ItemComponentPacket should be 64");
static_assert(sizeof(FilterTextPacket) == 0x50, "size of FilterTextPacket should be 80");

#endif // SIZE_STATIC_ASSERT

#ifdef SIZE_STATIC_ASSERT_IF_DEFINE

static_assert(sizeof(LoginPacket) == 0x38 || sizeof(LoginPacket) == 40, "size of LoginPacket should be 56 or 40(default)");
static_assert(sizeof(PlayStatusPacket) == 0x30 || sizeof(PlayStatusPacket) == 40, "size of PlayStatusPacket should be 48 or 40(default)");
static_assert(sizeof(ServerToClientHandshakePacket) == 0x48 || sizeof(ServerToClientHandshakePacket) == 40, "size of ServerToClientHandshakePacket should be 72 or 40(default)");
static_assert(sizeof(ClientToServerHandshakePacket) == 0x28 || sizeof(ClientToServerHandshakePacket) == 40, "size of ClientToServerHandshakePacket should be 40 or 40(default)");
static_assert(sizeof(DisconnectPacket) == 0x50 || sizeof(DisconnectPacket) == 40, "size of DisconnectPacket should be 80 or 40(default)");
static_assert(sizeof(ResourcePacksInfoPacket) == 0x60 || sizeof(ResourcePacksInfoPacket) == 40, "size of ResourcePacksInfoPacket should be 96 or 40(default)");
static_assert(sizeof(ResourcePackStackPacket) == 0xF8 || sizeof(ResourcePackStackPacket) == 40, "size of ResourcePackStackPacket should be 248 or 40(default)");
static_assert(sizeof(ResourcePackClientResponsePacket) == 0x40 || sizeof(ResourcePackClientResponsePacket) == 40, "size of ResourcePackClientResponsePacket should be 64 or 40(default)");
static_assert(sizeof(TextPacket) == 0xD0 || sizeof(TextPacket) == 40, "size of TextPacket should be 208 or 40(default)");
static_assert(sizeof(SetTimePacket) == 0x30 || sizeof(SetTimePacket) == 40, "size of SetTimePacket should be 48 or 40(default)");
static_assert(sizeof(StartGamePacket) == 0x4E0 || sizeof(StartGamePacket) == 40, "size of StartGamePacket should be 1248 or 40(default)");
static_assert(sizeof(AddPlayerPacket) == 0x2E0 || sizeof(AddPlayerPacket) == 40, "size of AddPlayerPacket should be 736 or 40(default)");
static_assert(sizeof(AddActorPacket) == 0x178 || sizeof(AddActorPacket) == 40, "size of AddActorPacket should be 376 or 40(default)");
static_assert(sizeof(RemoveActorPacket) == 0x30 || sizeof(RemoveActorPacket) == 40, "size of RemoveActorPacket should be 48 or 40(default)");
static_assert(sizeof(AddItemActorPacket) == 0x108 || sizeof(AddItemActorPacket) == 40, "size of AddItemActorPacket should be 264 or 40(default)");
static_assert(sizeof(TakeItemActorPacket) == 0x38 || sizeof(TakeItemActorPacket) == 40, "size of TakeItemActorPacket should be 56 or 40(default)");
static_assert(sizeof(MoveActorAbsolutePacket) == 0x48 || sizeof(MoveActorAbsolutePacket) == 40, "size of MoveActorAbsolutePacket should be 72 or 40(default)");
static_assert(sizeof(MovePlayerPacket) == 0x68 || sizeof(MovePlayerPacket) == 40, "size of MovePlayerPacket should be 104 or 40(default)");
static_assert(sizeof(RiderJumpPacket) == 0x30 || sizeof(RiderJumpPacket) == 40, "size of Unknown(20) should be 48 or 40(default)");
static_assert(sizeof(UpdateBlockPacket) == 0x40 || sizeof(UpdateBlockPacket) == 40, "size of UpdateBlockPacket should be 64 or 40(default)");
static_assert(sizeof(AddPaintingPacket) == 0x68 || sizeof(AddPaintingPacket) == 40, "size of AddPaintingPacket should be 104 or 40(default)");
static_assert(sizeof(TickSyncPacket) == 0x38 || sizeof(TickSyncPacket) == 40, "size of TickSyncPacket should be 56 or 40(default)");
static_assert(sizeof(LevelSoundEventPacketV1) == 0x48 || sizeof(LevelSoundEventPacketV1) == 40, "size of LevelSoundEventPacketV1 should be 72 or 40(default)");
static_assert(sizeof(LevelEventPacket) == 0x40 || sizeof(LevelEventPacket) == 40, "size of LevelEventPacket should be 64 or 40(default)");
static_assert(sizeof(BlockEventPacket) == 0x40 || sizeof(BlockEventPacket) == 40, "size of BlockEventPacket should be 64 or 40(default)");
static_assert(sizeof(ActorEventPacket) == 0x38 || sizeof(ActorEventPacket) == 40, "size of ActorEventPacket should be 56 or 40(default)");
static_assert(sizeof(MobEffectPacket) == 0x48 || sizeof(MobEffectPacket) == 40, "size of MobEffectPacket should be 72 or 40(default)");
static_assert(sizeof(UpdateAttributesPacket) == 0x50 || sizeof(UpdateAttributesPacket) == 40, "size of UpdateAttributesPacket should be 80 or 40(default)");
static_assert(sizeof(InventoryTransactionPacket) == 0x58 || sizeof(InventoryTransactionPacket) == 40, "size of InventoryTransactionPacket should be 88 or 40(default)");
static_assert(sizeof(MobEquipmentPacket) == 0xD0 || sizeof(MobEquipmentPacket) == 40, "size of MobEquipmentPacket should be 208 or 40(default)");
static_assert(sizeof(MobArmorEquipmentPacket) == 0x270 || sizeof(MobArmorEquipmentPacket) == 40, "size of MobArmorEquipmentPacket should be 624 or 40(default)");
static_assert(sizeof(InteractPacket) == 0x48 || sizeof(InteractPacket) == 40, "size of InteractPacket should be 72 or 40(default)");
static_assert(sizeof(BlockPickRequestPacket) == 0x38 || sizeof(BlockPickRequestPacket) == 40, "size of BlockPickRequestPacket should be 56 or 40(default)");
static_assert(sizeof(ActorPickRequestPacket) == 0x38 || sizeof(ActorPickRequestPacket) == 40, "size of ActorPickRequestPacket should be 56 or 40(default)");
static_assert(sizeof(PlayerActionPacket) == 0x48 || sizeof(PlayerActionPacket) == 40, "size of PlayerActionPacket should be 72 or 40(default)");
static_assert(sizeof(HurtArmorPacket) == 0x30 || sizeof(HurtArmorPacket) == 40, "size of HurtArmorPacket should be 48 or 40(default)");
static_assert(sizeof(SetActorDataPacket) == 0x50 || sizeof(SetActorDataPacket) == 40, "size of SetActorDataPacket should be 80 or 40(default)");
static_assert(sizeof(SetActorMotionPacket) == 0x40 || sizeof(SetActorMotionPacket) == 40, "size of SetActorMotionPacket should be 64 or 40(default)");
static_assert(sizeof(SetActorLinkPacket) == 0x48 || sizeof(SetActorLinkPacket) == 40, "size of SetActorLinkPacket should be 72 or 40(default)");
static_assert(sizeof(SetHealthPacket) == 0x30 || sizeof(SetHealthPacket) == 40, "size of SetHealthPacket should be 48 or 40(default)");
static_assert(sizeof(SetSpawnPositionPacket) == 0x48 || sizeof(SetSpawnPositionPacket) == 40, "size of SetSpawnPositionPacket should be 72 or 40(default)");
static_assert(sizeof(AnimatePacket) == 0x38 || sizeof(AnimatePacket) == 40, "size of AnimatePacket should be 56 or 40(default)");
static_assert(sizeof(RespawnPacket) == 0x40 || sizeof(RespawnPacket) == 40, "size of RespawnPacket should be 64 or 40(default)");
static_assert(sizeof(ContainerOpenPacket) == 0x40 || sizeof(ContainerOpenPacket) == 40, "size of ContainerOpenPacket should be 64 or 40(default)");
static_assert(sizeof(ContainerClosePacket) == 0x30 || sizeof(ContainerClosePacket) == 40, "size of ContainerClosePacket should be 48 or 40(default)");
static_assert(sizeof(PlayerHotbarPacket) == 0x30 || sizeof(PlayerHotbarPacket) == 40, "size of PlayerHotbarPacket should be 48 or 40(default)");
static_assert(sizeof(InventoryContentPacket) == 0x48 || sizeof(InventoryContentPacket) == 40, "size of InventoryContentPacket should be 72 or 40(default)");
static_assert(sizeof(InventorySlotPacket) == 0xC0 || sizeof(InventorySlotPacket) == 40, "size of InventorySlotPacket should be 192 or 40(default)");
static_assert(sizeof(ContainerSetDataPacket) == 0x38 || sizeof(ContainerSetDataPacket) == 40, "size of ContainerSetDataPacket should be 56 or 40(default)");
static_assert(sizeof(CraftingDataPacket) == 0x78 || sizeof(CraftingDataPacket) == 40, "size of CraftingDataPacket should be 120 or 40(default)");
static_assert(sizeof(CraftingEventPacket) == 0x70 || sizeof(CraftingEventPacket) == 40, "size of CraftingEventPacket should be 112 or 40(default)");
static_assert(sizeof(GuiDataPickItemPacket) == 0x70 || sizeof(GuiDataPickItemPacket) == 40, "size of GuiDataPickItemPacket should be 112 or 40(default)");
static_assert(sizeof(AdventureSettingsPacket) == 0x48 || sizeof(AdventureSettingsPacket) == 40, "size of AdventureSettingsPacket should be 72 or 40(default)");
static_assert(sizeof(BlockActorDataPacket) == 0x50 || sizeof(BlockActorDataPacket) == 40, "size of BlockActorDataPacket should be 80 or 40(default)");
static_assert(sizeof(PlayerInputPacket) == 0x38 || sizeof(PlayerInputPacket) == 40, "size of PlayerInputPacket should be 56 or 40(default)");
static_assert(sizeof(LevelChunkPacket) == 0x78 || sizeof(LevelChunkPacket) == 40, "size of LevelChunkPacket should be 120 or 40(default)");
static_assert(sizeof(SetCommandsEnabledPacket) == 0x30 || sizeof(SetCommandsEnabledPacket) == 40, "size of SetCommandsEnabledPacket should be 48 or 40(default)");
static_assert(sizeof(SetDifficultyPacket) == 0x30 || sizeof(SetDifficultyPacket) == 40, "size of SetDifficultyPacket should be 48 or 40(default)");
static_assert(sizeof(ChangeDimensionPacket) == 0x40 || sizeof(ChangeDimensionPacket) == 40, "size of ChangeDimensionPacket should be 64 or 40(default)");
static_assert(sizeof(SetPlayerGameTypePacket) == 0x30 || sizeof(SetPlayerGameTypePacket) == 40, "size of SetPlayerGameTypePacket should be 48 or 40(default)");
static_assert(sizeof(PlayerListPacket) == 0x48 || sizeof(PlayerListPacket) == 40, "size of PlayerListPacket should be 72 or 40(default)");
static_assert(sizeof(SimpleEventPacket) == 0x30 || sizeof(SimpleEventPacket) == 40, "size of SimpleEventPacket should be 48 or 40(default)");
static_assert(sizeof(EventPacket) == 0xF8 || sizeof(EventPacket) == 40, "size of EventPacket should be 248 or 40(default)");
static_assert(sizeof(SpawnExperienceOrbPacket) == 0x38 || sizeof(SpawnExperienceOrbPacket) == 40, "size of SpawnExperienceOrbPacket should be 56 or 40(default)");
static_assert(sizeof(ClientboundMapItemDataPacket) == 0xB0 || sizeof(ClientboundMapItemDataPacket) == 40, "size of ClientboundMapItemDataPacket should be 176 or 40(default)");
static_assert(sizeof(MapInfoRequestPacket) == 0x30 || sizeof(MapInfoRequestPacket) == 40, "size of MapInfoRequestPacket should be 48 or 40(default)");
static_assert(sizeof(RequestChunkRadiusPacket) == 0x30 || sizeof(RequestChunkRadiusPacket) == 40, "size of RequestChunkRadiusPacket should be 48 or 40(default)");
static_assert(sizeof(ChunkRadiusUpdatedPacket) == 0x30 || sizeof(ChunkRadiusUpdatedPacket) == 40, "size of ChunkRadiusUpdatedPacket should be 48 or 40(default)");
static_assert(sizeof(ItemFrameDropItemPacket) == 0x38 || sizeof(ItemFrameDropItemPacket) == 40, "size of ItemFrameDropItemPacket should be 56 or 40(default)");
static_assert(sizeof(GameRulesChangedPacket) == 0x40 || sizeof(GameRulesChangedPacket) == 40, "size of GameRulesChangedPacket should be 64 or 40(default)");
static_assert(sizeof(CameraPacket) == 0x38 || sizeof(CameraPacket) == 40, "size of CameraPacket should be 56 or 40(default)");
static_assert(sizeof(BossEventPacket) == 0x78 || sizeof(BossEventPacket) == 40, "size of BossEventPacket should be 120 or 40(default)");
static_assert(sizeof(ShowCreditsPacket) == 0x38 || sizeof(ShowCreditsPacket) == 40, "size of ShowCreditsPacket should be 56 or 40(default)");
static_assert(sizeof(AvailableCommandsPacket) == 0xB8 || sizeof(AvailableCommandsPacket) == 40, "size of AvailableCommandsPacket should be 184 or 40(default)");
static_assert(sizeof(CommandRequestPacket) == 0x90 || sizeof(CommandRequestPacket) == 40, "size of CommandRequestPacket should be 144 or 40(default)");
static_assert(sizeof(CommandBlockUpdatePacket) == 0xA8 || sizeof(CommandBlockUpdatePacket) == 40, "size of CommandBlockUpdatePacket should be 168 or 40(default)");
static_assert(sizeof(CommandOutputPacket) == 0x98 || sizeof(CommandOutputPacket) == 40, "size of CommandOutputPacket should be 152 or 40(default)");
static_assert(sizeof(UpdateTradePacket) == 0x88 || sizeof(UpdateTradePacket) == 40, "size of UpdateTradePacket should be 136 or 40(default)");
static_assert(sizeof(UpdateEquipPacket) == 0x50 || sizeof(UpdateEquipPacket) == 40, "size of UpdateEquipPacket should be 80 or 40(default)");
static_assert(sizeof(ResourcePackDataInfoPacket) == 0x80 || sizeof(ResourcePackDataInfoPacket) == 40, "size of ResourcePackDataInfoPacket should be 128 or 40(default)");
static_assert(sizeof(ResourcePackChunkDataPacket) == 0x70 || sizeof(ResourcePackChunkDataPacket) == 40, "size of ResourcePackChunkDataPacket should be 112 or 40(default)");
static_assert(sizeof(ResourcePackChunkRequestPacket) == 0x50 || sizeof(ResourcePackChunkRequestPacket) == 40, "size of ResourcePackChunkRequestPacket should be 80 or 40(default)");
static_assert(sizeof(TransferPacket) == 0x50 || sizeof(TransferPacket) == 40, "size of TransferPacket should be 80 or 40(default)");
static_assert(sizeof(PlaySoundPacket) == 0x60 || sizeof(PlaySoundPacket) == 40, "size of PlaySoundPacket should be 96 or 40(default)");
static_assert(sizeof(StopSoundPacket) == 0x50 || sizeof(StopSoundPacket) == 40, "size of StopSoundPacket should be 80 or 40(default)");
static_assert(sizeof(SetTitlePacket) == 0x60 || sizeof(SetTitlePacket) == 40, "size of SetTitlePacket should be 96 or 40(default)");
static_assert(sizeof(AddBehaviorTreePacket) == 0x48 || sizeof(AddBehaviorTreePacket) == 40, "size of AddBehaviorTreePacket should be 72 or 40(default)");
static_assert(sizeof(StructureBlockUpdatePacket) == 0xE8 || sizeof(StructureBlockUpdatePacket) == 40, "size of StructureBlockUpdatePacket should be 232 or 40(default)");
static_assert(sizeof(ShowStoreOfferPacket) == 0x70 || sizeof(ShowStoreOfferPacket) == 40, "size of ShowStoreOfferPacket should be 112 or 40(default)");
static_assert(sizeof(PurchaseReceiptPacket) == 0x40 || sizeof(PurchaseReceiptPacket) == 40, "size of PurchaseReceiptPacket should be 64 or 40(default)");
static_assert(sizeof(PlayerSkinPacket) == 0x248 || sizeof(PlayerSkinPacket) == 40, "size of PlayerSkinPacket should be 584 or 40(default)");
static_assert(sizeof(SubClientLoginPacket) == 0x30 || sizeof(SubClientLoginPacket) == 40, "size of SubClientLoginPacket should be 48 or 40(default)");
static_assert(sizeof(AutomationClientConnectPacket) == 0x48 || sizeof(AutomationClientConnectPacket) == 40, "size of AutomationClientConnectPacket should be 72 or 40(default)");
static_assert(sizeof(SetLastHurtByPacket) == 0x30 || sizeof(SetLastHurtByPacket) == 40, "size of SetLastHurtByPacket should be 48 or 40(default)");
static_assert(sizeof(BookEditPacket) == 0x98 || sizeof(BookEditPacket) == 40, "size of BookEditPacket should be 152 or 40(default)");
static_assert(sizeof(NpcRequestPacket) == 0x60 || sizeof(NpcRequestPacket) == 40, "size of NpcRequestPacket should be 96 or 40(default)");
static_assert(sizeof(PhotoTransferPacket) == 0x88 || sizeof(PhotoTransferPacket) == 40, "size of PhotoTransferPacket should be 136 or 40(default)");
static_assert(sizeof(ModalFormRequestPacket) == 0x50 || sizeof(ModalFormRequestPacket) == 40, "size of ModalFormRequestPacket should be 80 or 40(default)");
static_assert(sizeof(ModalFormResponsePacket) == 0x50 || sizeof(ModalFormResponsePacket) == 40, "size of ModalFormResponsePacket should be 80 or 40(default)");
static_assert(sizeof(ServerSettingsRequestPacket) == 0x28 || sizeof(ServerSettingsRequestPacket) == 40, "size of ServerSettingsRequestPacket should be 40 or 40(default)");
static_assert(sizeof(ServerSettingsResponsePacket) == 0x50 || sizeof(ServerSettingsResponsePacket) == 40, "size of ServerSettingsResponsePacket should be 80 or 40(default)");
static_assert(sizeof(ShowProfilePacket) == 0x48 || sizeof(ShowProfilePacket) == 40, "size of ShowProfilePacket should be 72 or 40(default)");
static_assert(sizeof(SetDefaultGameTypePacket) == 0x30 || sizeof(SetDefaultGameTypePacket) == 40, "size of SetDefaultGameTypePacket should be 48 or 40(default)");
static_assert(sizeof(RemoveObjectivePacket) == 0x48 || sizeof(RemoveObjectivePacket) == 40, "size of RemoveObjectivePacket should be 72 or 40(default)");
static_assert(sizeof(SetDisplayObjectivePacket) == 0xB0 || sizeof(SetDisplayObjectivePacket) == 40, "size of SetDisplayObjectivePacket should be 176 or 40(default)");
static_assert(sizeof(SetScorePacket) == 0x48 || sizeof(SetScorePacket) == 40, "size of SetScorePacket should be 72 or 40(default)");
static_assert(sizeof(LabTablePacket) == 0x40 || sizeof(LabTablePacket) == 40, "size of LabTablePacket should be 64 or 40(default)");
static_assert(sizeof(UpdateBlockSyncedPacket) == 0x50 || sizeof(UpdateBlockSyncedPacket) == 40, "size of UpdateBlockSyncedPacket should be 80 or 40(default)");
static_assert(sizeof(MoveActorDeltaPacket) == 0x68 || sizeof(MoveActorDeltaPacket) == 40, "size of MoveActorDeltaPacket should be 104 or 40(default)");
static_assert(sizeof(SetScoreboardIdentityPacket) == 0x48 || sizeof(SetScoreboardIdentityPacket) == 40, "size of SetScoreboardIdentityPacket should be 72 or 40(default)");
static_assert(sizeof(SetLocalPlayerAsInitializedPacket) == 0x30 || sizeof(SetLocalPlayerAsInitializedPacket) == 40, "size of SetLocalPlayerAsInitializedPacket should be 48 or 40(default)");
static_assert(sizeof(UpdateSoftEnumPacket) == 0x68 || sizeof(UpdateSoftEnumPacket) == 40, "size of UpdateSoftEnumPacket should be 104 or 40(default)");
static_assert(sizeof(NetworkStackLatencyPacket) == 0x38 || sizeof(NetworkStackLatencyPacket) == 40, "size of NetworkStackLatencyPacket should be 56 or 40(default)");
static_assert(sizeof(ScriptCustomEventPacket) == 0x58 || sizeof(ScriptCustomEventPacket) == 40, "size of ScriptCustomEventPacket should be 88 or 40(default)");
static_assert(sizeof(SpawnParticleEffectPacket) == 0x68 || sizeof(SpawnParticleEffectPacket) == 40, "size of SpawnParticleEffectPacket should be 104 or 40(default)");
static_assert(sizeof(AvailableActorIdentifiersPacket) == 0x40 || sizeof(AvailableActorIdentifiersPacket) == 40, "size of AvailableActorIdentifiersPacket should be 64 or 40(default)");
static_assert(sizeof(LevelSoundEventPacketV2) == 0x68 || sizeof(LevelSoundEventPacketV2) == 40, "size of LevelSoundEventPacketV2 should be 104 or 40(default)");
static_assert(sizeof(NetworkChunkPublisherUpdatePacket) == 0x38 || sizeof(NetworkChunkPublisherUpdatePacket) == 40, "size of NetworkChunkPublisherUpdatePacket should be 56 or 40(default)");
static_assert(sizeof(BiomeDefinitionListPacket) == 0x40 || sizeof(BiomeDefinitionListPacket) == 40, "size of BiomeDefinitionListPacket should be 64 or 40(default)");
static_assert(sizeof(LevelSoundEventPacket) == 0x68 || sizeof(LevelSoundEventPacket) == 40, "size of LevelSoundEventPacket should be 104 or 40(default)");
static_assert(sizeof(LevelEventGenericPacket) == 0x38 || sizeof(LevelEventGenericPacket) == 40, "size of LevelEventGenericPacket should be 56 or 40(default)");
static_assert(sizeof(LecternUpdatePacket) == 0x40 || sizeof(LecternUpdatePacket) == 40, "size of LecternUpdatePacket should be 64 or 40(default)");
static_assert(sizeof(AddEntityPacket) == 0x30 || sizeof(AddEntityPacket) == 40, "size of AddEntityPacket should be 48 or 40(default)");
static_assert(sizeof(RemoveEntityPacket) == 0x30 || sizeof(RemoveEntityPacket) == 40, "size of RemoveEntityPacket should be 48 or 40(default)");
static_assert(sizeof(ClientCacheStatusPacket) == 0x30 || sizeof(ClientCacheStatusPacket) == 40, "size of ClientCacheStatusPacket should be 48 or 40(default)");
static_assert(sizeof(OnScreenTextureAnimationPacket) == 0x30 || sizeof(OnScreenTextureAnimationPacket) == 40, "size of OnScreenTextureAnimationPacket should be 48 or 40(default)");
static_assert(sizeof(MapCreateLockedCopyPacket) == 0x38 || sizeof(MapCreateLockedCopyPacket) == 40, "size of MapCreateLockedCopyPacket should be 56 or 40(default)");
static_assert(sizeof(StructureTemplateDataRequestPacket) == 0xC0 || sizeof(StructureTemplateDataRequestPacket) == 40, "size of StructureTemplateDataRequestPacket should be 192 or 40(default)");
static_assert(sizeof(StructureTemplateDataResponsePacket) == 0x58 || sizeof(StructureTemplateDataResponsePacket) == 40, "size of StructureTemplateDataResponsePacket should be 88 or 40(default)");
static_assert(sizeof(ClientCacheBlobStatusPacket) == 0x58 || sizeof(ClientCacheBlobStatusPacket) == 40, "size of ClientCacheBlobStatusPacket should be 88 or 40(default)");
static_assert(sizeof(ClientCacheMissResponsePacket) == 0x80 || sizeof(ClientCacheMissResponsePacket) == 40, "size of ClientCacheMissResponsePacket should be 128 or 40(default)");
static_assert(sizeof(EducationSettingsPacket) == 0xE0 || sizeof(EducationSettingsPacket) == 40, "size of EducationSettingsPacket should be 224 or 40(default)");
static_assert(sizeof(EmotePacket) == 0x58 || sizeof(EmotePacket) == 40, "size of EmotePacket should be 88 or 40(default)");
static_assert(sizeof(MultiplayerSettingsPacket) == 0x30 || sizeof(MultiplayerSettingsPacket) == 40, "size of MultiplayerSettingsPacket should be 48 or 40(default)");
static_assert(sizeof(SettingsCommandPacket) == 0x50 || sizeof(SettingsCommandPacket) == 40, "size of SettingsCommandPacket should be 80 or 40(default)");
static_assert(sizeof(AnvilDamagePacket) == 0x38 || sizeof(AnvilDamagePacket) == 40, "size of AnvilDamagePacket should be 56 or 40(default)");
static_assert(sizeof(CompletedUsingItemPacket) == 0x30 || sizeof(CompletedUsingItemPacket) == 40, "size of CompletedUsingItemPacket should be 48 or 40(default)");
static_assert(sizeof(NetworkSettingsPacket) == 0x30 || sizeof(NetworkSettingsPacket) == 40, "size of NetworkSettingsPacket should be 48 or 40(default)");
static_assert(sizeof(PlayerAuthInputPacket) == 0x78 || sizeof(PlayerAuthInputPacket) == 40, "size of PlayerAuthInputPacket should be 120 or 40(default)");
static_assert(sizeof(CreativeContentPacket) == 0x48 || sizeof(CreativeContentPacket) == 40, "size of CreativeContentPacket should be 72 or 40(default)");
static_assert(sizeof(PlayerEnchantOptionsPacket) == 0x40 || sizeof(PlayerEnchantOptionsPacket) == 40, "size of PlayerEnchantOptionsPacket should be 64 or 40(default)");
static_assert(sizeof(ItemStackRequestPacket) == 0x30 || sizeof(ItemStackRequestPacket) == 40, "size of ItemStackRequestPacket should be 48 or 40(default)");
static_assert(sizeof(ItemStackResponsePacket) == 0x40 || sizeof(ItemStackResponsePacket) == 40, "size of ItemStackResponsePacket should be 64 or 40(default)");
static_assert(sizeof(PlayerArmorDamagePacket) == 0x38 || sizeof(PlayerArmorDamagePacket) == 40, "size of PlayerArmorDamagePacket should be 56 or 40(default)");
static_assert(sizeof(CodeBuilderPacket) == 0x50 || sizeof(CodeBuilderPacket) == 40, "size of CodeBuilderPacket should be 80 or 40(default)");
static_assert(sizeof(UpdatePlayerGameTypePacket) == 0x38 || sizeof(UpdatePlayerGameTypePacket) == 40, "size of UpdatePlayerGameTypePacket should be 56 or 40(default)");
static_assert(sizeof(EmoteListPacket) == 0x48 || sizeof(EmoteListPacket) == 40, "size of EmoteListPacket should be 72 or 40(default)");
static_assert(sizeof(PositionTrackingDBServerBroadcastPacket) == 0x48 || sizeof(PositionTrackingDBServerBroadcastPacket) == 40, "size of PositionTrackingDBServerBroadcastPacket should be 72 or 40(default)");
static_assert(sizeof(PositionTrackingDBClientRequestPacket) == 0x30 || sizeof(PositionTrackingDBClientRequestPacket) == 40, "size of PositionTrackingDBClientRequestPacket should be 48 or 40(default)");
static_assert(sizeof(DebugInfoPacket) == 0x50 || sizeof(DebugInfoPacket) == 40, "size of DebugInfoPacket should be 80 or 40(default)");
static_assert(sizeof(PacketViolationWarningPacket) == 0x58 || sizeof(PacketViolationWarningPacket) == 40, "size of PacketViolationWarningPacket should be 88 or 40(default)");
static_assert(sizeof(MotionPredictionHintsPacket) == 0x40 || sizeof(MotionPredictionHintsPacket) == 40, "size of MotionPredictionHintsPacket should be 64 or 40(default)");
static_assert(sizeof(AnimateEntityPacket) == 0xC8 || sizeof(AnimateEntityPacket) == 40, "size of AnimateEntityPacket should be 200 or 40(default)");
static_assert(sizeof(CameraShakePacket) == 0x38 || sizeof(CameraShakePacket) == 40, "size of CameraShakePacket should be 56 or 40(default)");
static_assert(sizeof(PlayerFogPacket) == 0x40 || sizeof(PlayerFogPacket) == 40, "size of PlayerFogPacket should be 64 or 40(default)");
static_assert(sizeof(CorrectPlayerMovePredictionPacket) == 0x50 || sizeof(CorrectPlayerMovePredictionPacket) == 40, "size of CorrectPlayerMovePredictionPacket should be 80 or 40(default)");
static_assert(sizeof(ItemComponentPacket) == 0x40 || sizeof(ItemComponentPacket) == 40, "size of ItemComponentPacket should be 64 or 40(default)");
static_assert(sizeof(FilterTextPacket) == 0x50 || sizeof(FilterTextPacket) == 40, "size of FilterTextPacket should be 80 or 40(default)");

#endif // SIZE_STATIC_ASSERT_IF_DEFINE
