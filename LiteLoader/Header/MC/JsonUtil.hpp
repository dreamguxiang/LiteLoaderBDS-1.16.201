// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

namespace JsonUtil {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    MCAPI void LogMissingChildSchemaOption(enum class LogArea, class Json::Value const &, std::string const &, std::string const &, std::string const &);
    MCAPI void LogUnknownChildSchemaOption(std::string const &, enum class LogArea, class Json::Value const &);
    MCAPI void eraseSchema(class HashedString const &, class SemVersion const &);
    MCAPI class Json::Value & getMemberByCaseInsensitiveName(class Json::Value &, class gsl::basic_string_span<char const, -1> const &);
    MCAPI class Json::Value const & getMemberByCaseInsensitiveNameConst(class Json::Value const &, class gsl::basic_string_span<char const, -1> const &);
    MCAPI class std::map<class HashedString, class std::map<class SemVersion, class std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>, struct std::less<class SemVersion>, class std::allocator<struct std::pair<class SemVersion const, class std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>>>>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::map<class SemVersion, class std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>, struct std::less<class SemVersion>, class std::allocator<struct std::pair<class SemVersion const, class std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>>>>>>> & getSchemaMap();
    MCAPI class std::mutex & getSchemaMapLock();
    MCAPI bool parseBannerBlockType(enum class BannerBlockType &, class Json::Value const &);
    MCAPI bool parseItem(std::string &, std::string &, int &, std::string const &);
    MCAPI bool parseItemColor(enum class ItemColor &, class Json::Value const &);
    MCAPI bool parseRange(class Json::Value const &, int &, int &);
    MCAPI bool parseVec3(class Vec3 &, class Json::Value const &);
    MCAPI void printJsonSchema_childNode(std::string &, std::string const &, class HashedString const &, std::string const &, bool, unsigned __int64, unsigned __int64, std::string const &, std::string const &);
    MCAPI void setDefaultPrettyName(std::string &, class HashedString const &);

};