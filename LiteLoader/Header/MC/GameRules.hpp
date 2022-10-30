// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "GameRule.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GameRules {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULES
public:
    class GameRules& operator=(class GameRules const &) = delete;
    GameRules(class GameRules const &) = delete;
    GameRules() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMERULES
#endif
    MCAPI std::unique_ptr<class GameRulesChangedPacket> createAllGameRulesPacket() const;
    MCAPI void deserializeRules(class GameRulesChangedPacketData const &);
    MCAPI bool getBool(struct GameRuleId) const;
    MCAPI int getInt(struct GameRuleId) const;
    MCAPI class GameRule const * getRule(struct GameRuleId) const;
    MCAPI void getTagData(class CompoundTag const &);
    MCAPI struct GameRuleId nameToGameRuleIndex(std::string const &) const;
    MCAPI void setMarketplaceOverrides();
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, bool, bool, bool *, bool *, class GameRule::ValidationError *);
    MCAPI void setTagData(class CompoundTag &) const;
    MCAPI ~GameRules();
    MCAPI static int const MAX_FUNCTIONCOMMANDLIMIT;

//private:
    MCAPI class GameRule & _registerRule(std::string const &, struct GameRuleId);
    MCAPI void _registerRules();
    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setRule(struct GameRuleId, union GameRule::Value, enum GameRule::Type, bool, bool *, bool *, class GameRule::ValidationError *);

private:

};