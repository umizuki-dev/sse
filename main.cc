#include "components.h"
#include "print.h"

int main() {
  Board gameBoard;
  gameBoard.wipe();
  printBoard(gameBoard);
  return 0;
}
