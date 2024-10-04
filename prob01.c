#include "chess.h"
#include "figures.h"
#include <stdlib.h>

#define SIZE_BOARD 8
char **pieces[] = {rook, bishop, pawn, queen, pawn, knight, king, queen};

char** drawPieces(char ***pieces, int size, char** previousJoin) {
  if (size == 0)
    return previousJoin;
  
  char **joined = pieces[size - 1];
  if (previousJoin)
    joined = join(previousJoin, joined);
  
  return drawPieces(pieces, size - 1, joined);
}

void freePiece(char **piece) {
  for (int i = 0; i <sizeof(whiteSquare) / sizeof(char *); ++i)
    free(piece[i]);
}

void prob01() {
  char **blackSquare = reverse(whiteSquare);
  interpreter(blackSquare);
  freePiece(blackSquare);
}

void display() {
  /* interpreter(repeatV(drawPieces(pieces, SIZE_BOARD, NULL), SIZE_BOARD)); */
  prob01();
}
