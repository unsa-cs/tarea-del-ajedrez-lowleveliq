#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(whiteSquare, blackSquare);
  char **row = repeatH(bothblocks, 4);
  interpreter(flipV(row));
}
