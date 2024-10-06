#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **twoKnights = repeatH(knight, 2);
  char **knightblocks = superImpose(twoKnights, bothblocks);
  interpreter(knightblocks);
}

