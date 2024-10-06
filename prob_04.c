#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **Peon = superImpose(blackSquare, pawn);
  interpreter(Peon);
}
