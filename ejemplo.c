#include "chess.h"
#include "figures.h"
void display(){
  char** whiteblock = whiteSquare;
  char** block = repeatH(whiteblock, 8);
  interpreter(block);
}
