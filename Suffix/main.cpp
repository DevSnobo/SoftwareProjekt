#include "stdio.h"
#include "string.h"

char *extract(char *input) {
    char *tmp = input;

    while (*input != '\0') {

        if (*input == ':' && *(input + 1) == ':') {
            tmp = input + 2;
        }
        input++;
    }
    return tmp;
}

void extract2(char *input, char** output) {
    *output = extract(input);
}


typedef enum { OK, FAIL } Test;

Test testCount(char *input2, char *expected) {
    Test t;
    char *output = NULL;
    extract2(input2, &output);
    if ((strcmp(expected, output) == 0) &&
        (strcmp(expected, extract(input2)) == 0)) {
        t = OK;
    } else {
        t = FAIL;
    }
    return t;
}

typedef struct {
    char *input2;
    char *expected;
} TestCase;

void runTests(int no, TestCase test[]) {
    Test t;
    int i;

    for (i = 0; i < no; i++) {
        printf("Test %d: ", i);
        t = testCount(test[i].input2, test[i].expected);

        if (OK == t)
            printf("OK \n");
        if (FAIL == t)
            printf("FAIL \n");
        printf("Input \t %s \nExpected %s \n\n", test[i].input2, test[i].expected);
    }
}
int main() {

    const int testNo = 9;
    TestCase tests[9] = {
            {"AC::AB", "AB"},    {"::Ha::kk::", ""},   {"A::CAB", "CAB"},
            {"Ha:k::k", "k"},    {"::AC:AB", "AC:AB"}, {"H::a:kk", "a:kk"},
            {"A::C::A::B", "B"}, {"Hakk", "Hakk"},     {"Ha::k:k", "k:k"},
    };

    runTests(testNo, tests);

    return 0;
}