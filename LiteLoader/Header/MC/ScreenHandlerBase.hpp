// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScreenHandlerBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERBASE
public:
    class ScreenHandlerBase& operator=(class ScreenHandlerBase const &) = delete;
    ScreenHandlerBase(class ScreenHandlerBase const &) = delete;
    ScreenHandlerBase() = delete;
#endif

public:
    /*0*/ virtual ~ScreenHandlerBase();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual enum ItemStackNetResult handleAction(class ItemStackRequestAction const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCREENHANDLERBASE
    MCVAPI bool canDestroy(enum ContainerEnumName, unsigned char) const;
    MCVAPI enum ItemStackNetResult endRequest();
    MCVAPI void endRequestBatch();
    MCVAPI void postRequest(bool);
#endif

};