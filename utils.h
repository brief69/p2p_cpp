

#ifndef UTILS_H
#define UTILS_H

#include <string>

namespace Utils {
    std::string getUserInput();
    void sleep(int milliseconds);

    bool hasUserInput();

    // ユニークなIDを生成する関数
    std::string generateUniqueID();

    // IPアドレスが有効かどうかを検証する関数
    bool validateIPAddress(const std::string& ipAddress);

    // ポート番号が有効かどうかを検証する関数
    bool validatePortNumber(int portNumber);

    // 文字列をバイト配列に変換する関数
    std::vector<unsigned char> stringToBytes(const std::string& str);

    // バイト配列を文字列に変換する関数
    std::string bytesToString(const std::vector<unsigned char>& bytes);

}

#endif // UTILS_H
