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

  interpreter(topthreerows);
}
