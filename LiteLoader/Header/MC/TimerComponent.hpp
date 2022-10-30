// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TimerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMERCOMPONENT
public:
    class TimerComponent& operator=(class TimerComponent const &) = delete;
    TimerComponent(class TimerComponent const &) = delete;
    TimerComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TIMERCOMPONENT
#endif
    MCAPI TimerComponent(class TimerComponent &&);
    MCAPI class TimerComponent & operator=(class TimerComponent &&);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void restartTimer(class Actor &);
    MCAPI ~TimerComponent();

//private:
    MCAPI int getRandomTime(class Actor &);

private:

};