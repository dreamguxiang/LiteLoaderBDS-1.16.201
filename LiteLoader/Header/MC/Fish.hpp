// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "WaterAnimal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Fish : public WaterAnimal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISH
public:
    class Fish& operator=(class Fish const &) = delete;
    Fish(class Fish const &) = delete;
    Fish() = delete;
#endif

public:
    /*3*/ virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~Fish();
    /*32*/ virtual void __unk_vfn_32();
    /*40*/ virtual void normalTick();
    /*45*/ virtual bool startRiding(class Actor &);
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*83*/ virtual void playerTouch(class Player &);
    /*89*/ virtual void __unk_vfn_89();
    /*91*/ virtual void __unk_vfn_91();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*123*/ virtual void __unk_vfn_123();
    /*171*/ virtual void __unk_vfn_171();
    /*184*/ virtual void __unk_vfn_184();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*238*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*241*/ virtual void __unk_vfn_241();
    /*249*/ virtual void __unk_vfn_249();
    /*260*/ virtual void __unk_vfn_260();
    /*294*/ virtual void __unk_vfn_294();
    /*304*/ virtual void __unk_vfn_304();
    /*330*/ virtual bool createAIGoals();
    /*338*/ virtual void __unk_vfn_338();
    /*354*/ virtual void __unk_vfn_354();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FISH
#endif

};