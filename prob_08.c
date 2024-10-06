#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **queenBlack = superImpose(queen, blackSquare);
  char **queenWhite = superImpose(queen, whiteSquare);

  char **row1 = join(bothblocks, join(queenBlack, join(whiteSquare, repeatH(bothblocks, 2))));  
  char **row2 = join(queenWhite, join(blackSquare, repeatH(bothblocks, 3)));  
  char **row3;  
  char **row4;  
  char **row5;  
  char **row6;  
  char **row7;  
  char **row8;  

  interpreter(row2);
}
