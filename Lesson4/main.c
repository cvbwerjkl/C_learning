#include "func.h"

void test_f(const char* mainstring, char* substring, int32_t result, int32_t test_number); // substring_count function test
void test_f2(const char* mainstring, int32_t result1, int32_t result2, int32_t test_number); // substring_search function test

int main() {
    /*substring_count function tests*/
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

    test_f(mainstring4, substring4, 1, 4);

    char mainstring5[] = "o    ";
    char substring5[] = "o";

    test_f(mainstring5, substring5, 1, 5);

    char mainstring6[] = " oo   ";
    char substring6[] = "o";

    test_f(mainstring6, substring6, 0, 6);

    /*substring_search function tests*/
    char mainstring01[] = "aaaa(aa)aaaaa";
    test_f2(mainstring01, 5, 6, 1);

    char mainstring02[] = "aaaa(aaaaaaa";
    test_f2(mainstring02, 0, 0, 2);

    
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

void test_f2(const char* mainstring, int32_t result1, int32_t result2, int32_t test_number) {
    char* substring_start = NULL;
    char* substring_end = NULL;


    substring_search(mainstring, &substring_start, &substring_end);

    if (substring_start != NULL && substring_end != NULL && substring_start - mainstring == result1 && substring_end - mainstring == result2) {
        printf("%s %d %s\n", "TEST",  test_number, "PASSED");
    }
    else if (substring_start == NULL && result1 == 0) {
        printf("%s %d %s\n", "TEST",  test_number, "PASSED");
    }
    else {
        printf("%s %d %s\n", "TEST",  test_number, "FAILD");
        printf("Result1 %d  Expected %d Result2 %d  Expected %d\n", (int)(substring_start - mainstring), result1, (int)(substring_end - mainstring), result2);
    }

}