#include "func.h"

int main() {

    /*strcpy function test*/
    char str1[10];
    char str2[] = "test_word";

    strcpy (&str1, &str2);
    printf("Test strcpy:\n %s\n", str1);

    /*strcmp function test*/

    /*strchr function test*/
    char character;

    char str3[] = "test_word";
    character = 'e';
    
    printf("Test strchr:\n %c\n", *(strchr(&str3, character)));

    return 0;
}