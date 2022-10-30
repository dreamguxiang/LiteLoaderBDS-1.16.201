
#pragma once
#include "../Global.h"
#include "Json.hpp"


namespace JsonHelpers {
//void addObjectArrayField(class Json::Value &, std::string const &, std::vector<class Json::Value> const &);
//void addObjectField(class Json::Value &, std::string const &, class Json::Value const &);
//void addStringField(class Json::Value &, std::string const &, std::string const &);
//void addUint32Field(class Json::Value &, std::string const &, unsigned int const &);
bool parseJson(std::string const &str, class Json::Value &value);
std::string serialize(class Json::Value const &value);

};