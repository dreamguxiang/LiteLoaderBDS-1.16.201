// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NoteBlock : public ActorBlock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOTEBLOCK
public:
    class NoteBlock& operator=(class NoteBlock const &) = delete;
    NoteBlock(class NoteBlock const &) = delete;
    NoteBlock() = delete;
#endif

public:
    /*0*/ virtual ~NoteBlock();
    /*1*/ virtual class Block const & getStateFromLegacyData(unsigned short) const;
    /*2*/ virtual class std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const &, class Block const &) const;
    /*3*/ virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual bool getCollisionShape(class AABB &, class Block const &, class BlockSource &, class BlockPos const &, class Actor *) const;
    /*6*/ virtual bool isObstructingChests(class BlockSource &, class BlockPos const &) const;
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &, int &) const;
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class Actor *) const;
    /*12*/ virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*13*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*14*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
    /*20*/ virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /*21*/ virtual void getConnectedDirections(class Block const &, class BlockPos const &, class BlockSource &, bool &, bool &, bool &, bool &) const;
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual bool isWaterBlocking() const;
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual bool canHurtAndBreakItem() const;
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual bool canContainLiquid() const;
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual bool canBeUsedInCommands(class BaseGameVersion const &) const;
    /*50*/ virtual float getThickness() const;
    /*51*/ virtual void __unk_vfn_51();
    /*52*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*53*/ virtual void __unk_vfn_53();
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void __unk_vfn_55();
    /*56*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*57*/ virtual void __unk_vfn_57();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*63*/ virtual enum class BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /*64*/ virtual void updateEntityAfterFallOn(class BlockPos const &, struct IActorMovementProxy &) const;
    /*65*/ virtual void __unk_vfn_65();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual bool mayPick(class BlockSource &, class Block const &, bool) const;
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*74*/ virtual void __unk_vfn_74();
    /*75*/ virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /*76*/ virtual bool breaksFallingBlocks(class Block const &) const;
    /*77*/ virtual void __unk_vfn_77();
    /*78*/ virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*81*/ virtual void __unk_vfn_81();
    /*82*/ virtual void __unk_vfn_82();
    /*83*/ virtual void __unk_vfn_83();
    /*84*/ virtual void __unk_vfn_84();
    /*85*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int, bool) const;
    /*86*/ virtual void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int, bool) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*89*/ virtual int calcVariant(class BlockSource &, class BlockPos const &) const;
    /*90*/ virtual void __unk_vfn_90();
    /*91*/ virtual bool attack(class Player *, class BlockPos const &) const;
    /*92*/ virtual void __unk_vfn_92();
    /*93*/ virtual void __unk_vfn_93();
    /*94*/ virtual void __unk_vfn_94();
    /*95*/ virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /*96*/ virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /*97*/ virtual void executeEvent(std::string const &, class RenderParams &) const;
    /*98*/ virtual void executeEvent(class BlockSource &, class BlockPos const &, class Block const &, std::string const &, class Actor &) const;
    /*99*/ virtual bool executeTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /*100*/ virtual bool executeTriggerChain(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /*101*/ virtual void forceExecuteTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /*102*/ virtual class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /*103*/ virtual bool shouldStopFalling(class Actor &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual float calcGroundFriction(class Mob &, class BlockPos const &) const;
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual bool onDig(class Block const &, class Actor &, class ItemStack &, class BlockPos const &) const;
    /*110*/ virtual bool canSlide(class BlockSource &, class BlockPos const &) const;
    /*111*/ virtual void __unk_vfn_111();
    /*112*/ virtual void __unk_vfn_112();
    /*113*/ virtual void __unk_vfn_113();
    /*114*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*115*/ virtual void __unk_vfn_115();
    /*116*/ virtual void __unk_vfn_116();
    /*117*/ virtual void __unk_vfn_117();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual int getColorForParticle(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*120*/ virtual void __unk_vfn_120();
    /*121*/ virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /*122*/ virtual float getShadeBrightness(class Block const &) const;
    /*123*/ virtual class AABB const & getVisualShapeInWorld(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    /*124*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*125*/ virtual class AABB const & getUIShape(class Block const &, class AABB &) const;
    /*126*/ virtual int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /*127*/ virtual int getVariant(class Block const &) const;
    /*128*/ virtual void __unk_vfn_128();
    /*129*/ virtual class Block const & getRenderBlock() const;
    /*130*/ virtual void __unk_vfn_130();
    /*131*/ virtual void __unk_vfn_131();
    /*132*/ virtual void __unk_vfn_132();
    /*133*/ virtual void __unk_vfn_133();
    /*134*/ virtual class BlockLegacy & init();
    /*135*/ virtual class BlockLegacy & setLightBlock(struct Brightness);
    /*136*/ virtual class BlockLegacy & setLightEmission(float);
    /*137*/ virtual class BlockLegacy & setExplodeable(float);
    /*138*/ virtual class BlockLegacy & setFlammable(class FlameOdds, class BurnOdds);
    /*139*/ virtual class BlockLegacy & setDestroyTime(float);
    /*140*/ virtual class BlockLegacy & setFriction(float);
    /*141*/ virtual class BlockLegacy & addProperty(enum class BlockProperty);
    /*142*/ virtual class BlockLegacy & addState(class ItemState const &);
    /*143*/ virtual class BlockLegacy & addState(class ItemState const &, unsigned __int64);
    /*144*/ virtual class BlockLegacy & setAllowsRunes(bool);
    /*145*/ virtual class BlockLegacy & setMapColor(class mce::Color const &);
    /*146*/ virtual void __unk_vfn_146();
    /*147*/ virtual void __unk_vfn_147();
    /*148*/ virtual void setVisualShape(class AABB const &);
    /*149*/ virtual void setVisualShape(class Vec3 const &, class Vec3 const &);
    /*150*/ virtual void __unk_vfn_150();
    /*151*/ virtual void __unk_vfn_151();
    /*152*/ virtual void __unk_vfn_152();
    /*153*/ virtual void __unk_vfn_153();
    /*154*/ virtual void __unk_vfn_154();
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*158*/ virtual void __unk_vfn_158();
    /*159*/ virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /*160*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*161*/ virtual void __unk_vfn_161();
    /*162*/ virtual bool shouldRandomTick() const;
    /*163*/ virtual void __unk_vfn_163();
    /*164*/ virtual class HitResult clip(class BlockSource &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /*165*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*166*/ virtual void __unk_vfn_166();
    /*167*/ virtual enum class BlockRenderLayer getRenderLayer() const;
    /*168*/ virtual enum class BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual float getExplosionResistance(class Actor *) const;
    /*171*/ virtual struct Brightness getLightEmission(class Block const &) const;
    /*172*/ virtual void __unk_vfn_172();
    /*173*/ virtual void __unk_vfn_173();
    /*174*/ virtual void __unk_vfn_174();
    /*175*/ virtual void _executeEvent(std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /*176*/ virtual bool _executeTrigger(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /*177*/ virtual void _forceExecuteTrigger(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /*178*/ virtual class ItemInstance getEntityResourceItem(class Random &, class BlockActor const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NOTEBLOCK
    MCVAPI bool isInteractiveBlock() const;
#endif

};