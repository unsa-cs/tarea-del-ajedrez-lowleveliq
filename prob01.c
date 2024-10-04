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

void display() {
  interpreter(repeatV(drawPieces(pieces, SIZE_BOARD, NULL), SIZE_BOARD));
}
