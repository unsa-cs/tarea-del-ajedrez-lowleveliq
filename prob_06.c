
#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **oddRow = repeatH(bothblocks, 4);
  char **evenRow = reverse(oddRow);
  char **twoRows = up(oddRow, evenRow);
  char **piezas = join(rook, knight);
  piezas = join(piezas, bishop);
  piezas = join(piezas, queen);
  piezas = join(piezas, king);
  piezas = join(piezas, bishop);
  piezas = join(piezas, knight);
  piezas = join(piezas, rook);
  char **peones = repeatH(pawn, 8);
  char **piezasBlancas = up(piezas, peones);
  char **piezasNegras = reverse(up(peones, piezas));
  char **fullWhiteRow = superImpose(piezasBlancas, twoRows);
  char **fullBlackRow = superImpose(piezasNegras, twoRows);
  char **middleGround = repeatV(twoRows, 2);

  interpreter(middleGround);
}
