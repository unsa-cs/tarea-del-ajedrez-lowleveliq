#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **oddrow = repeatH(bothblocks,4);
  char **evenrow = reverse(oddrow);
  char **topthreerows = up(up(oddrow,evenrow),oddrow);
  char **bottomthreerows = reverse(topthreerows);

  char **threeSquares = join(join(whiteSquare,blackSquare),whiteSquare);
  char **reversethreeSquares = reverse(threeSquares);

  char **topLeftKnight = superImpose(knight, blackSquare);
  char **topRightKnight = superImpose(rotateR(knight), whiteSquare);
  char **middleUpperKnights = join(topLeftKnight, topRightKnight);
  
  char **middleUpperRow = join(join(threeSquares, middleUpperKnights),reversethreeSquares);
  char **middleLowerRow = rotateR(rotateR(middleUpperRow));
  char **middleRows = up(middleUpperRow, middleLowerRow);

  char **fullBoard = up(up(topthreerows,middleRows),bottomthreerows);
  interpreter(fullBoard);
}
