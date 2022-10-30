// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FunctionManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUNCTIONMANAGER
public:
    class FunctionManager& operator=(class FunctionManager const &) = delete;
    FunctionManager(class FunctionManager const &) = delete;
    FunctionManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FUNCTIONMANAGER
#endif
    MCAPI FunctionManager(std::unique_ptr<class ICommandDispatcher>, std::unique_ptr<class CommandOrigin>, class GameRule const *);
    MCAPI int execute(class FunctionEntry &, class CommandOrigin const &);
    MCAPI int getExecutionLimit() const;
    MCAPI class FunctionEntry * getFunction(std::string const &);
    MCAPI void load(class ResourcePackManager &, class CommandRegistry &);
    MCAPI static std::string getFunctionNameFromPath(class Core::Path const &);

//protected:
    MCAPI void _addTickFunctionsFromJson(class Json::Value const &);
    MCAPI void _processFunctionEntry(std::string const &, std::vector<std::string> const &, std::vector<std::string> &, enum CurrentCmdVersion, class CommandRegistry const &);

//private:
    MCAPI class CommandOrigin const & _addOriginReference(class CommandOrigin const &, unsigned int);
    MCAPI int _processCommandStack(class FunctionEntry &, class CommandOrigin const &);

protected:

private:

};