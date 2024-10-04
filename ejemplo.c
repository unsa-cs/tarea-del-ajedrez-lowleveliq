#include "chess.h"
#include "figures.h"

void display(){
  char** BlackQueen = reverse(queen);
  char** joined = join(BlackQueen, pawn);
  interpreter(BlackQueen);
  interpreter(joined);

}
