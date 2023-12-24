

#include "utils.h"
#include <vector>
#include <random>
#include <sstream>
#include <regex>
#include <thread>
#include <iostream>

namespace Utils {
    void sleep(int milliseconds) {
        std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
    }

     bool hasUserInput() {
        // ここにユーザー入力があるかどうかをチェックするコードを書く
        return false; // 一時的にfalseを返す
    }

    std::string getUserInput() {
        std::string input;
        std::getline(std::cin, input);
        return input;
    }

    // ユニークなIDを生成する関数
    std::string generateUniqueID() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, 15);
        std::stringstream ss;
        for (int i = 0; i < 32; ++i) {
            ss << std::hex << dis(gen);
        }
        return ss.str();
    }

    // IPアドレスが有効かどうかを検証する関数
    bool validateIPAddress(const std::string& ipAddress) {
        std::regex ipRegex(
            "^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}"
            "(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$");
        if (std::regex_match(ipAddress, ipRegex)) {
            return true;
        } else {
            return false;
        }
    }

    // ポート番号が有効かどうかを検証する関数
    bool validatePortNumber(int portNumber) {
        if (portNumber > 0 && portNumber <= 65535) {
            return true;
        } else {
            return false;
        }
    }

    // 文字列をバイト配列に変換する関数
    std::vector<unsigned char> stringToBytes(const std::string& str) {
        return std::vector<unsigned char>(str.begin(), str.end());
    }

    // バイト配列を文字列に変換する関数
    std::string bytesToString(const std::vector<unsigned char>& bytes) {
        return std::string(bytes.begin(), bytes.end());
    }

}
