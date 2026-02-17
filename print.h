#ifndef PRINT_H
#define PRINT_H

#include <iostream>

void printBoard(Board myBoard) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      std::cout << myBoard.board[i][j];
    }
    std::cout << "\n";
  }
}

#endif
