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
  char **row6 = join(repeatH(bothIblocks, 3), join(queenWhite, blackSquare));  
  char **row7 = join(blackSquare, join(queenWhite, repeatH(bothblocks, 3)));  
  char **row8 = join(bothIblocks, join(whiteSquare, join(queenBlack, repeatH(bothIblocks, 2))));  

  interpreter(up(row1, up(row2, up(row3, up(row4, up(row5, up(row6, up(row7, row8))))))));
}
