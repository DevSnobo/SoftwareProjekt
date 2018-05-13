#include <stdio.h>

int breakIntoWords(char *line, int maxwords, char *words[]) {
    int cnt = 0;
    int wordStart = 0;
    int wordEnd = 0;


    for (cnt = 0; cnt < maxwords; ++cnt) {

        // cycle through string until there is a word
        while ((line[wordStart] == ' ') && (line[wordStart] != '\0')) {
            wordStart++;
        }

        wordEnd = wordStart;

        // cycle through the word until there is a space or \0
        while ((line[wordEnd] != ' ') && (line[wordEnd] != '\0')) {
            wordEnd++;
        }

        // place \0 at the end of a word, then save that pointer to the words array
        if (line[wordEnd] != '\0') {
            *(line + wordEnd) = '\0';

            words[cnt] = line + wordStart;

            wordStart = wordEnd + 1;

            // if the end of the input string is reached, add the last word and cnt++ one last time
        } else {
            words[cnt] = line + wordStart;
            cnt++;
            break;
        }
    }
    return cnt;
}

int main() {

    char line[] = " 1 2 3 4 5 6 7 8";
    int nWords = 0;
    int maxwords = 10;
    char *words[maxwords];

    nWords = breakIntoWords(line, maxwords, words);
    printf("Aufgabe 3 \n");
    printf("Number of words counted: %d\n", nWords);

    for (int n = 0; n < nWords; n++) {
        printf(" %d: %s\n", n, words[n]);
    }

}