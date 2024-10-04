#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **row = repeatH(bothblocks, 4);
  char **row2 = reverse(row);
  char **bothbrows = repeatV(up(row,row2),2);
  interpreter(bothbrows);
}
