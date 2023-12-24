

#include "message.h"

// コンストラクタ
// メッセージの送信者、受信者、内容を設定します
Message::Message(const std::string& sender, const std::string& receiver, const std::string& content)
    : sender_(sender), receiver_(receiver), content_(content) {}

// 単一の std::string 引数を取るコンストラクタ
Message::Message(const std::string& text)
    : sender_(""), receiver_(""), content_(text) {}

// メッセージの送信者を取得します
std::string Message::getSender() const {
    return sender_;
}

// メッセージの受信者を取得します
std::string Message::getReceiver() const {
    return receiver_;
}

// メッセージの内容を取得します
std::string Message::getContent() const {
    return content_;
}