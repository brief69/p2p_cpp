

#include "p2pService.h"

// コンストラクタ
P2PService::P2PService(NetworkManager& networkManager) : networkManager_(networkManager) {}

// P2Pサービスを開始する
void P2PService::start() {
    // ネットワークマネージャを開始する
    networkManager_.start();
}

// 受信したメッセージを処理する
void P2PService::processMessage(const Message& message) {
    // ネットワークマネージャを使用してメッセージを処理する
    networkManager_.processMessage(message);
}

// メッセージを送信する
void P2PService::sendMessage(const Message& message) {
    // ネットワークマネージャを使用してメッセージを送信する
    networkManager_.sendMessage(message);
}