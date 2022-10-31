#include <MC/ServerPlayer.hpp>
#include <mc/GameMode.hpp>

ServerPlayer* GameMode::getPlayer() {
    return (ServerPlayer*)mPlayer;
}