#include "func.h"

void test_f(const char* mainstring, char* substring, int32_t result, int32_t test_number);

int main() {
    char mainstring[] = "Hell o w o rld";
    char substring[] = "o";

    test_f(mainstring, substring, 2, 1);

    char mainstring2[] = "   o  ";
    char substring2[] = "o";

    test_f(mainstring2, substring2, 1, 2);

    char mainstring3[] = "     ";
    char substring3[] = "o";

    test_f(mainstring3, substring3, 0, 3);

    char mainstring4[] = "    o";
    char substring4[] = "o";

    test_f(mainstring4, substring4, 0, 4);

    char mainstring5[] = "o    ";
    char substring5[] = "o";

    test_f(mainstring5, substring5, 0, 5);

    char mainstring6[] = " oo   ";
    char substring6[] = "o";

    test_f(mainstring6, substring6, 0, 6);
    
    return 0;
}

void test_f(const char* mainstring, char* substring, int32_t result, int32_t test_number) {
    if (substring_count(mainstring, substring) == result) {
        printf("%s %d %s\n", "TEST",  test_number, "PASSED");
    }
    else {
        printf("%s %d %s\n", "TEST",  test_number, "FAILD");
        printf("Result %d", substring_count(mainstring, substring));
        printf(" Expected %d\n", result);
    }
}