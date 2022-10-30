#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RelativeFloat {

#define AFTER_EXTRA
// Add Member There
public:
    float value;
    bool is_relative;

    RelativeFloat(float value)
        : value(value)
        , is_relative(true) {
    }

    inline float getFloat(float center) const {
        if (is_relative)
            return center + value;
        return value;
    }
    RelativeFloat(){
        this->value = 0.0;
        this->is_relative = 1;
    };
    RelativeFloat(float base, bool relative){
        this->value = base;
        this->is_relative = relative;
    };
    float getValue(float base) const{
        if(this->is_relative)
            return base + this->value;
        else
            return this->value;
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RELATIVEFLOAT
public:
    class RelativeFloat& operator=(class RelativeFloat const &) = delete;
    RelativeFloat(class RelativeFloat const &) = delete;
#endif

public:
    /**
     * @symbol ??0RelativeFloat@@QEAA@XZ
     * @hash   1491997340
     */
    //MCAPI RelativeFloat();
    /**
     * @symbol ??0RelativeFloat@@QEAA@M_N@Z
     * @hash   -528987998
     */
    //MCAPI RelativeFloat(float, bool);
    /**
     * @symbol ?getValue@RelativeFloat@@QEBAMM@Z
     * @hash   -802423667
     */
    //MCAPI float getValue(float) const;

};