

#include "p2pService.h" // P2Pサービスのヘッダーファイルをインクルード
#include "networkManager.h" // ネットワークマネージャーのヘッダーファイルをインクルード
#include "message.h" // メッセージのヘッダーファイルをインクルード
#include "utils.h" // ユーティリティのヘッダーファイルをインクルード


int main() {
    // ネットワークマネージャーのインスタンスを作成
    NetworkManager networkManager;

    // ネットワークマネージャーを使用してP2Pサービスのインスタンスを作成
    P2PService p2pService(networkManager);

    // P2Pサービスを開始
    p2pService.start();

    // メインループ
    while (true) {
        // 受信メッセージがあるかどうかを確認
        if (networkManager.hasIncomingMessage()) {
            Message message = networkManager.getIncomingMessage();

            // メッセージを処理
            p2pService.processMessage(message);
        }

        // ユーザー入力があるかどうかを確認
        if (Utils::hasUserInput()) {
            std::string userInput = Utils::getUserInput();

            // ユーザー入力から新しいメッセージを作成
            Message message("", "", userInput);

            // メッセージを送信
            p2pService.sendMessage(message);
        }

        // CPUの過剰使用を防ぐために一時停止
        Utils::sleep(100);
    }

    return 0; // プログラムの終了
}
