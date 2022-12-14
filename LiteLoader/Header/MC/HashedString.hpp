// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HashedString {

#define AFTER_EXTRA
public: 
    unsigned __int64 mStrHash;
    std::string mStr;
    const HashedString* mLastMatch;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HASHEDSTRING
public:
    HashedString() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HASHEDSTRING
#endif
    MCAPI HashedString(unsigned __int64, char const *);
    MCAPI HashedString(std::string const &);
    MCAPI HashedString(char const *);
    MCAPI HashedString(class HashedString &&);
    MCAPI HashedString(class HashedString const &);
    MCAPI unsigned __int64 getHash() const;
    MCAPI std::string const & getString() const;
    MCAPI operator class gsl::basic_string_span<char const, -1>() const;
    MCAPI bool operator!=(class HashedString const &) const;
    MCAPI class HashedString & operator=(class HashedString &&);
    MCAPI class HashedString & operator=(class HashedString const &);
    MCAPI bool operator==(class HashedString const &) const;
    MCAPI ~HashedString();
    MCAPI static unsigned __int64 computeHash(char const *);
    MCAPI static unsigned __int64 computeHash(std::string const &);
    MCAPI static class HashedString defaultErrorValue;
    MCAPI static class HashedString const & getEmptyString();

};