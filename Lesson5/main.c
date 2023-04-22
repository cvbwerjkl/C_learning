#include "filo.h"

struct Item* Filo = NULL;

int main() {

    char c = 'f';
    push(c);
  
    char tmp;
    if (pop(&tmp)) printf("%c\n", tmp);

    return 0;
}

