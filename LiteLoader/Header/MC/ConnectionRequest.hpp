// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "persona.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ConnectionRequest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONNECTIONREQUEST
public:
    class ConnectionRequest& operator=(class ConnectionRequest const &) = delete;
    ConnectionRequest() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONNECTIONREQUEST
#endif
    MCAPI ConnectionRequest(class ConnectionRequest const &);
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;
    MCAPI std::string getArmSize() const;
    MCAPI std::vector<unsigned char> getCapeData() const;
    MCAPI std::string getCapeId() const;
    MCAPI std::string getClientPlatformId() const;
    MCAPI std::string getClientPlatformOfflineId() const;
    MCAPI std::string getClientPlatformOnlineId() const;
    MCAPI unsigned __int64 getClientRandomId() const;
    MCAPI std::string getClientThirdPartyName() const;
    MCAPI std::string getDeviceId() const;
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;
    MCAPI class std::unordered_map<enum persona::PieceType, class TintMapColor, struct std::hash<enum persona::PieceType>, struct std::equal_to<enum persona::PieceType>, class std::allocator<struct std::pair<enum persona::PieceType const, class TintMapColor>>> getPieceTintColors() const;
    MCAPI std::string getSelfSignedId() const;
    MCAPI std::string getSkinAnimationData() const;
    MCAPI class mce::Color getSkinColor() const;
    MCAPI std::vector<unsigned char> getSkinData() const;
    MCAPI std::string getSkinGeometry() const;
    MCAPI std::string getSkinId() const;
    MCAPI std::string getSkinResourcePatch() const;
    MCAPI std::string getTenantId() const;
    MCAPI bool isPersonaSkin() const;
    MCAPI std::string toString();
    MCAPI bool verify(std::vector<std::string> const &, __int64);
    MCAPI bool verifySelfSigned();
    MCAPI ~ConnectionRequest();
    MCAPI static class ConnectionRequest fromString(std::string const &);

//private:
    MCAPI ConnectionRequest(std::unique_ptr<class WebToken>, std::string const &);
    MCAPI class Json::Value getData(std::string const &) const;

private:

};