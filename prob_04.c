#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **row = repeatH(bothblocks, 4);
  char **rowrook = superImpose(rook, row);
  interpreter(rowrook);
}
