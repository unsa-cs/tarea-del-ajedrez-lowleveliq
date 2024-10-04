#include "chess.h"
#include "figures.h"
#include <stdlib.h>
void display(){
  char** BlackQueen = reverse(queen);
  char** joined = join(BlackQueen, pawn);
  interpreter(joined);
  free(BlackQueen);
  free(joined);
}
