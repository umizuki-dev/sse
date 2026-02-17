#include <iostream>

class Board {
  public:
    int board[9][9];
    int komadaiSente[7];
    int komadaiGote [7];

    enum Turn {
      Sente,
      Gote,
    };

    Turn turn;

    Board() {
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          board[i][j] = 0;
        }
      }

      for (int i = 0; i < 7; i++) {
        komadaiSente[i] = 0;
        komadaiGote[i] = 0;
      }
      
      turn = Sente;
    }

    void print() {
      /* pretty print turn */
      std::cout << turn << "\n";

      std::cout << "\n";

      for (int i = 0; i < 7; i++) {
        /* TODO: assign ints to peices */
        /* TODO: pretty print komadai */
        std::cout << komadaiSente[i];
      }

      /* space between komadai and board */
      std::cout << "\n";
      std::cout << "\n";

      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          /* TODO: assign ints to peices */
          std::cout << board[i][j];
        }
        std::cout << "\n";
      }

      /* space between komadai and board */
      std::cout << "\n";

      for (int i = 0; i < 7; i++) {
        /* TODO: assign ints to peices */
        /* TODO: pretty print komadai */
        std::cout << komadaiGote[i];
      }

      /* space from bottom */
      std::cout << "\n";
    }
};

int main() {
  Board gameBoard;
  gameBoard.print();
  return 0;
}
