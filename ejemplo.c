#include "chess.h"
#include "figures.h"
void display(){
  char** whiteblock = whiteSquare;
  char** blackblock = reverse(whiteSquare);
  char** bothblocks = join(whiteblock, blackblock);
  interpreter(bothblocks);
}
