// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Minecart : public Actor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECART
public:
    class Minecart& operator=(class Minecart const &) = delete;
    Minecart(class Minecart const &) = delete;
    Minecart() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*2*/ virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~Minecart();
    /*25*/ virtual float getInterpolatedBodyYaw(float) const;
    /*32*/ virtual void __unk_vfn_32();
    /*37*/ virtual void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /*40*/ virtual void normalTick();
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*74*/ virtual float getShadowHeightOffs();
    /*75*/ virtual float getShadowRadius() const;
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual bool isPickable();
    /*89*/ virtual void __unk_vfn_89();
    /*91*/ virtual void __unk_vfn_91();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*123*/ virtual void __unk_vfn_123();
    /*126*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*132*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*171*/ virtual void __unk_vfn_171();
    /*173*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*184*/ virtual void __unk_vfn_184();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*234*/ virtual void kill();
    /*241*/ virtual void __unk_vfn_241();
    /*243*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*245*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*246*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void _onSizeUpdated();
    /*260*/ virtual void __unk_vfn_260();
    /*261*/ virtual void destroy(class ActorDamageSource const &, bool);
    /*262*/ virtual enum class MinecartType getType() = 0;
    /*263*/ virtual class Block const * getDefaultDisplayBlock() const;
    /*264*/ virtual void __unk_vfn_264();
    /*265*/ virtual int getDefaultDisplayOffset() const;
    /*266*/ virtual void applyNaturalSlowdown(class BlockSource &);
    /*267*/ virtual void _lazyInitDisplayBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECART
    MCVAPI bool canMakeStepSound() const;
    MCVAPI int getDefaultDisplayData() const;
#endif
    MCAPI Minecart(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &);
    MCAPI void setCustomDisplay(bool);
    MCAPI void setDisplayBlock(class Block const &);

//private:
    MCAPI void _registerLoopingSounds();

private:

};