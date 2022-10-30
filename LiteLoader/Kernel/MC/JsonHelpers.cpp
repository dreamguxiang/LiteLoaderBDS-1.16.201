//
// Created by User on 2022/10/29.
//
#include "MC/JsonHelpers.hpp"

bool JsonHelpers::parseJson(std::string const &str, class Json::Value &value){
    auto jsonRead = new Json::Reader();
    jsonRead->parse(str,value);
    return true;
};

std::string JsonHelpers::serialize(class Json::Value const &value){
    if(value.empty())
        return "";
    return value.toStyledString();
};