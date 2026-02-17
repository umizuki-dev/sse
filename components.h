#ifndef COMPONENTS_H
#define COMPONENTS_H

class Board {
  public:
    int board[9][9];
    int komadaiSente[7];
    int komadaiGote[7];
    enum Turn {
      Sente,
      Gote,
    };

    void wipe() {
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          board[i][j] = 0;
        }
      }
    }

    void setup() {
    }
};

#endif
