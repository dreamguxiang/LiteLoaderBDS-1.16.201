// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HttpHeaders {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HTTPHEADERS
public:
    class HttpHeaders& operator=(class HttpHeaders const &) = delete;
    HttpHeaders(class HttpHeaders const &) = delete;
    HttpHeaders() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HTTPHEADERS
#endif
    MCAPI void clear();
    MCAPI bool getHeader(std::string const &, std::string &) const;
    MCAPI enum HttpHeaders::ParseState parse(class RakNet::BitStream &);
    MCAPI ~HttpHeaders();

};