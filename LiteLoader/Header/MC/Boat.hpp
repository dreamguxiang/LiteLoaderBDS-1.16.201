// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Boat : public Actor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOAT
public:
    class Boat& operator=(class Boat const &) = delete;
    Boat(class Boat const &) = delete;
    Boat() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*2*/ virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~Boat();
    /*11*/ virtual void remove();
    /*32*/ virtual void __unk_vfn_32();
    /*40*/ virtual void normalTick();
    /*46*/ virtual void addRider(class Actor &);
    /*48*/ virtual std::string getExitTip(std::string const &, enum class InputMode) const;
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*74*/ virtual float getShadowHeightOffs();
    /*75*/ virtual float getShadowRadius() const;
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*84*/ virtual void onAboveBubbleColumn(bool);
    /*88*/ virtual bool isPickable();
    /*89*/ virtual void __unk_vfn_89();
    /*91*/ virtual void __unk_vfn_91();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*123*/ virtual void __unk_vfn_123();
    /*126*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*171*/ virtual void __unk_vfn_171();
    /*173*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*180*/ virtual bool canAddRider(class Actor &) const;
    /*184*/ virtual void __unk_vfn_184();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*212*/ virtual float getRiderYRotation(class Actor const &) const;
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*241*/ virtual void __unk_vfn_241();
    /*243*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*249*/ virtual void __unk_vfn_249();
    /*260*/ virtual void __unk_vfn_260();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOAT
#endif
    MCAPI Boat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &);
    MCAPI void computePaddleForcesBasedOnGaze(class Vec3 &, float &, float &, float, float);
    MCAPI void destroy(class Actor *);
    MCAPI float getRowingTime(enum class Side) const;
    MCAPI bool setPaddleForce(enum class Side, float);
    MCAPI bool setPaddleState(enum class Side, bool);
    MCAPI void setRowingTime(enum class Side, float);

//private:
    MCAPI void _computePaddleForce(float &, float &, float, float);
    MCAPI void _control();
    MCAPI void _move();
    MCAPI void _paddleControl(enum class Side, class Vec3 &, class Vec3 &);

private:

};