#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **row = repeatH(bothblocks, 4);
  char **row2 = reverse(row);
  char **bothbrows = up(row,row2);
  char **bothbrows2 = up(bothbrows,bothbrows);
  interpreter(bothbrows2);
}
