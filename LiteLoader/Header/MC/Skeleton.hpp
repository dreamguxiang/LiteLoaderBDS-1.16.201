// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Skeleton : public HumanoidMonster {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETON
public:
    class Skeleton& operator=(class Skeleton const &) = delete;
    Skeleton(class Skeleton const &) = delete;
    Skeleton() = delete;
#endif

public:
    /*7*/ virtual ~Skeleton();
    /*32*/ virtual void __unk_vfn_32();
    /*40*/ virtual void normalTick();
    /*42*/ virtual void rideTick();
    /*44*/ virtual float getRidingHeight();
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*89*/ virtual void __unk_vfn_89();
    /*91*/ virtual void __unk_vfn_91();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*104*/ virtual void setTarget(class Actor *);
    /*123*/ virtual void __unk_vfn_123();
    /*171*/ virtual void __unk_vfn_171();
    /*184*/ virtual void __unk_vfn_184();
    /*199*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*210*/ virtual void getDebugText(std::vector<std::string> &);
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*235*/ virtual void die(class ActorDamageSource const &);
    /*241*/ virtual void __unk_vfn_241();
    /*249*/ virtual void __unk_vfn_249();
    /*260*/ virtual void __unk_vfn_260();
    /*294*/ virtual void __unk_vfn_294();
    /*303*/ virtual bool doHurtTarget(class Actor *);
    /*304*/ virtual void __unk_vfn_304();
    /*338*/ virtual void __unk_vfn_338();
    /*354*/ virtual void __unk_vfn_354();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SKELETON
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Skeleton(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &);

//private:

private:
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

};