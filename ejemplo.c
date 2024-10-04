#include "chess.h"
#include "figures.h"
void display() {
  char **whiteblock = whiteSquare;
  char **blackblock = reverse(whiteSquare);
  char **bothblocks = join(whiteblock, blackblock);
  char **row = join(bothblocks, bothblocks);
  interpreter(row);
}
