#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **oddrow = repeatH(bothblocks,4);
  char **evenrow = reverse(oddrow);
  char **queenBlack = superImpose(queen, blackSquare);
  char **queenWhite = superImpose(queen, whiteSquare);

  interpreter(join(queenBlack, queenWhite));
}
