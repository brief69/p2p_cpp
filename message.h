

#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

// メッセージクラス
class Message {
public: // メッセージの送信者、受信者、内容を設定します
    Message(const std::string& sender, const std::string& receiver, const std::string& content);
    Message(const std::string& text);
    std::string getSender() const; // メッセージの送信者を取得します
    std::string getReceiver() const; // メッセージの受信者を取得します
    std::string getContent() const; // メッセージの内容を取得します

private:
    std::string sender_; // メッセージの送信者
    std::string receiver_; // メッセージの受信者
    std::string content_; // メッセージの内容
};

#endif // MESSAGE_H