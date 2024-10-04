#include "chess.h"
#include "figures.h"
#include <stdlib.h>
void display(){
  char** background = reverse(whiteSquare);
  char** super = superImpose(knight, background);
  char** doble = repeatH(super,2);
  char** rotate = rotateL(doble);
  char** flip = flipV(rotate);
  interpreter(flip);
  free(background);
  free(super);
  free(rotate);
  free(doble);
  free(flip);
}
