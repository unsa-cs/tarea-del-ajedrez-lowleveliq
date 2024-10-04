#include "chess.h"
#include "figures.h"

void display(){
  char** BlackQueen = reverse(queen);
  char** joined = join(BlackQueen, pawn);
  char** joined2 = join(king,rook);
  char** repeat = repeatH(rook,10);
  char** repeat2 = repeatV(repeat,8);
  char** upp = up(rook,pawn);
  char** upp2 = up(upp,knight);

  interpreter(upp2);

}
