
# コンパイラ
CC = g++

# コンパイラフラグ
CFLAGS = -Wall -std=c++11

# インクルードパス
INCLUDES = -I.

# ソースファイル
SOURCES = main.cpp p2pService.cpp networkManager.cpp message.cpp utils.cpp

# オブジェクトファイル
OBJECTS = $(SOURCES:.cpp=.o)

# 実行可能ファイル名
EXECUTABLE = p2pService

# 全てのターゲットをビルド
all: $(EXECUTABLE)

# 実行可能ファイルをビルド
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^

# オブジェクトファイルをビルド
%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# ビルドしたファイルを削除
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)