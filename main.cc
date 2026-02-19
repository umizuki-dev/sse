#include <iostream>
#include <string>

class Board {
  public:
    int bitBoard[9][9];
    int komadaiSente[7];
    int komadaiGote[7];
    bool isSente;

    Board() {
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          bitBoard[i][j] = 0;
        }
      }

      for (int i = 0; i < 7; i++) {
        komadaiSente[i] = 0;
        komadaiGote[i] = 0;
      }

      isSente = true;
    }

};

void clear() {
  for (int i = 0; i < 100; i++) {
    std::cout << "\n";
  }
}

void printDigitZenkaku(int n) {
  std::string zenkaku[10] = {"０", "１", "２", "３", "４", "５", "６", "７", "８", "９"};
  std::cout << zenkaku[n];
}

void printBoard(Board myBoard) {
  clear();

  std::cout << "手番：";
  if (myBoard.isSente) {
    std::cout << "先手\n＝＝＝＝＝\n\n";
  } else {
    std::cout << "後手\n＝＝＝＝＝\n\n";
  }

  for (int i = 0; i < 7; i++) {
    if (myBoard.komadaiSente[i] > 0) {
      switch (i) {
        case 0:
          std::cout << "歩";
          break;
        case 1:
          std::cout << "香";
          break;
        case 2:
          std::cout << "桂";
          break;
        case 3:
          std::cout << "銀";
          break;
        case 4:
          std::cout << "金";
          break;
        case 5:
          std::cout << "角";
          break;
        case 6:
          std::cout << "飛";
          break;
      }
      printDigitZenkaku(myBoard.komadaiSente[i]);
    }
  }

  /* need space between komadai and board */
  std::cout << "\n\n";

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      /* TODO: assign ints to peices */
      std::cout << myBoard.bitBoard[i][j];
    }
    std::cout << "\n";
  }

  /* need space between komadai and board */
  std::cout << "\n";

  for (int i = 0; i < 7; i++) {
    if (myBoard.komadaiGote[i] > 0) {
      switch (i) {
        case 0:
          std::cout << "歩";
          break;
        case 1:
          std::cout << "香";
          break;
        case 2:
          std::cout << "桂";
          break;
        case 3:
          std::cout << "銀";
          break;
        case 4:
          std::cout << "金";
          break;
        case 5:
          std::cout << "角";
          break;
        case 6:
          std::cout << "飛";
          break;
      }
      printDigitZenkaku(myBoard.komadaiGote[i]);
    }
  }

  /* stop board clashing with prompt on exit */
  std::cout << "\n";
}

int main() {
  Board gameBoard;
  gameBoard.komadaiSente[0] = 3;
  gameBoard.komadaiSente[4] = 1;

  printBoard(gameBoard);
  return 0;
}
