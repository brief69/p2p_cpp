#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include "message.h"
#include <vector>

// ネットワークマネージャクラス
class NetworkManager {
    // ...
public:
    bool hasIncomingMessage() {
        // ここで受信メッセージが存在するかどうかを確認します。
        // この例では、仮の実装として常にfalseを返します。
        return false;
    }

    Message getIncomingMessage() {
        // メッセージを取得して返す実装をここに書く
        return Message("Hello World"); // 一時的にデフォルトのMessageを返す
    }

    // コンストラクタ
    NetworkManager();

    // ネットワークマネージャを開始します
    void start();

    // ネットワークマネージャを停止します
    void stop();

    // ピアにメッセージを送信します
    void sendMessage(const Message& message);

    void processMessage(const Message& message);

    // ピアからメッセージを受信します
    Message receiveMessage();

    // 接続されているピアのリストを取得します
    std::vector<std::string> getConnectedPeers();

private:
    // 接続されているピアのリスト
    std::vector<std::string> connectedPeers_;
};

#endif // NETWORKMANAGER_H