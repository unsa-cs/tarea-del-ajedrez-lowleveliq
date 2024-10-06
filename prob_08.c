#include "chess.h"
#include "figures.h"

void display() {
  char **blackSquare = reverse(whiteSquare);
  char **bothblocks = join(blackSquare, whiteSquare);
  char **bothIblocks = reverse(bothblocks);
  char **queenBlack = superImpose(queen, blackSquare);
  char **queenWhite = superImpose(queen, whiteSquare);

  char **row1 = join(queenBlack, join(whiteSquare, repeatH(bothblocks, 3)));  
  char **row2 = join(repeatH(bothIblocks, 2), join(queenWhite, join(blackSquare, bothIblocks)));  
  char **row3 = join(repeatH(bothblocks, 3), join(blackSquare,  queenWhite));  
  char **row4 = join(repeatH(bothIblocks, 2), join(whiteSquare, join(queenBlack, bothIblocks))); 
  char **row5 = join(bothblocks, join(queenBlack, join(whiteSquare, repeatH(bothblocks, 2))));  
  char **row6;  
  char **row7;  
  char **row8;  

  interpreter(row5);
}
