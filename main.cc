#include <iostream>

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

void printBoard(Board myBoard) {
  std::cout << "手番：";
  if (myBoard.isSente) {
    std::cout << "先手\n＝＝＝＝＝\n\n";
  } else {
    std::cout << "後手\n＝＝＝＝＝\n\n";
  }

  for (int i = 0; i < 7; i++) {
    /* TODO: assign ints to peices */
    /* TODO: pretty print komadai */
    std::cout << myBoard.komadaiSente[i];
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
    /* TODO: assign ints to peices */
    /* TODO: pretty print komadai */
    std::cout << myBoard.komadaiGote[i];
  }

  /* stop board clashing with prompt on exit */
  std::cout << "\n";
}

int main() {
  Board gameBoard;

  clear();
  printBoard(gameBoard);
  return 0;
}
