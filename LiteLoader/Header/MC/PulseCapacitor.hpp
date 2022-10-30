// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PulseCapacitor : public ProducerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PULSECAPACITOR
public:
    class PulseCapacitor& operator=(class PulseCapacitor const &) = delete;
    PulseCapacitor(class PulseCapacitor const &) = delete;
    PulseCapacitor() = delete;
#endif

public:
    /*0*/ virtual ~PulseCapacitor();
    /*1*/ virtual int getStrength() const;
    /*3*/ virtual void setStrength(int);
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual bool canConsumerPower() const;
    /*10*/ virtual unsigned __int64 getInstanceType() const;
    /*13*/ virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /*15*/ virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /*18*/ virtual void __unk_vfn_18();
    /*21*/ virtual void __unk_vfn_21();
    /*23*/ virtual unsigned char getPoweroutDirection() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PULSECAPACITOR
    MCVAPI bool consumePowerAnyDirection() const;
#endif

};