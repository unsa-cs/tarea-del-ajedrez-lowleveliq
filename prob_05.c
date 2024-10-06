#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **row = repeatH(bothblocks,4);
  char **piezas = join(rook,knight);
  piezas = join(piezas,bishop);
  piezas = join(piezas,queen);
  piezas = join(piezas,king);
  piezas = join(piezas,bishop);
  piezas = join(piezas,knight);
  piezas = join(piezas,rook);
  char **fullrow = superImpose(reverse(piezas),row); 
  interpreter(fullrow);
}

