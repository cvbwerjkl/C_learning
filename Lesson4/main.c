#include "func.h"

int main() {
    char mainstring[] = "Hello world";
    char substring[] = "o";

    printf("%d\n", substring_count (&mainstring, &substring));
    
    return 0;
}