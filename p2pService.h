

#ifndef P2PSERVICE_H
#define P2PSERVICE_H

#include "networkManager.h"
#include "message.h"

// P2Pサービスクラス
class P2PService {
public:
    // コンストラクタ
    P2PService(NetworkManager& networkManager);

    // P2Pサービスを開始する
    void start();

    // 受信メッセージを処理する
    void processMessage(const Message& message);

    // メッセージを送信する
    void sendMessage(const Message& message);

private:
    // ネットワークマネージャへの参照
    NetworkManager& networkManager_;
};

#endif // P2PSERVICE_H