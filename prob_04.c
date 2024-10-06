#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **row = repeatH(bothblocks, 4);
  char **Torre = superImpose(rook, blackSquare);
  char **completeblock = join(bothblocks, Torre);
  char **completerow = join(row, completeblock);
  interpreter(completerow);
}
