#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = reverse(knight);
  char** joined = join(blackKnight, bishop);
  interpreter(blackKnight);
  interpreter(joined);
}
