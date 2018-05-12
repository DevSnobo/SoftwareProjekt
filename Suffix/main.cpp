#include "stdio.h"

char *extract(char *input) {
    char *tmp = nullptr;

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


int main() {

    char s1[] = "Ha::ll::o";
    char s2[] = "Ha::ll::ooo";
    char s3[] = "Ha::ll::o:asd::dqhs:,asdu;odasu";
    char s4[] = "tes:.sd:asdddd::";

    char *output;


    extract2(s1, &output);
    printf("%s\n", output);

    output = extract(s1);
    printf("%s\n", output);

    extract2(s4, &output);
    printf("%s\n", output);

    output = extract(s4);
    printf("%s\n", output);

    extract2(s2, &output);
    printf("%s\n", output);

    output = extract(s2);
    printf("%s\n", output);

    extract2(s3, &output);
    printf("%s\n", output);

    output = extract(s3);
    printf("%s\n", output);

    extract2(s4, &output);
    printf("%s\n", output);

}