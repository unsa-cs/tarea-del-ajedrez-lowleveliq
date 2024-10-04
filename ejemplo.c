#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = reverse(knight);
  char** blackbiShop = reverse(bishop);
  interpreter(blackKnight);
  interpreter(blackbiShop);
}
