#include <MC/NetworkIdentifier.hpp>
#include <MC/RakNet.hpp>

string NetworkIdentifier::getIP() {
    string rv =getAddress();
//    Global<RakNet::RakPeer>->getAdr(*this).ToString_New(true, rv.data(), ':');
    return rv.substr(0, rv.find('|'));
}