#include <iostream>

enum Turn {
  Sente,
  Gote,
};

class Board {
  public:
    int bitBoard[9][9];
    int komadaiSente[7];
    int komadaiGote[7];

    Turn turn;

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

      turn = Sente;
    }

};

void printBoard(Board myBoard) {
  std::cout << "手番：";
  switch (myBoard.turn) {
    case Sente:
      std::cout << "先手\n";
      break;
    case Gote:
      std::cout << "後手\n";
      break;
  }

  for (int i = 0; i < 7; i++) {
    /*駒をenumで表現する*/
    /* TODO: assign ints to peices */
    /* TODO: pretty print komadai */
    std::cout << myBoard.komadaiSente[i];
  }

  /* need space between komadai and board */
  std::cout << "\n";
  std::cout << "\n";

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

  /* need to stop board clashing with prompt on exit */
  std::cout << "\n";
}

int main() {
  Board gameBoard;
  printBoard(gameBoard);
  return 0;
}
