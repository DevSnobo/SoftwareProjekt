#include "stdio.h"

// Ueberspringe alle Leerzeichen
// Rueckgabe ist Zeiger auf das erste Nichtleerzeichen
char* leerzeichen(char* input) {
  while(*input == ' ')
    input++;
  return input;
}

// Scanne durch string solange bis wir auf ein
// Leerzeichen oder das Ende des Strings treffen.
// Effektiv ueberspringen wir ein Wort.
// Rueckgabe: Zeiger auf Ende oder Leerzeichen.
char* zeichen(char* input) {
  while(*input != '\0' && *input != ' ')
    input++;
  return input;
}


int count(char* input) {
  int cnt = 0;

  // Solange das Ende nicht erreicht ist:
  // 1. Ueberspringe alle Leerzeichen
  // 2. Falls Zeichen gefunden
  //     (a) setze Zaehler hoch
  //     (b) Gehe zu Wortende

  while(*input != '\0') {
    input = leerzeichen(input);
    if(*input != '\0') {
      cnt++;
      input = zeichen(input);
    }
  }
  return cnt;
}


typedef enum {
  OK,
  FAIL
} Test;

Test testCount(char* input, int expected) {
  Test t;

  if(expected == count(input)) {
    t = OK;
  }
  else {
    t = FAIL;
  }
  return t;
}


typedef struct {
  char* input;
  int expected;
} TestCase;


void runTests(int no, TestCase test[]) {
  Test t;
  int i;

  for(i=0; i < no; i++) {
    printf("Test %d: ", i);
    t = testCount(test[i].input, test[i].expected);
    if(OK == t)
      printf("OK \n");
    if(FAIL == t)
      printf("FAIL \n");
  }
}


int main() {
  const int testNo = 9;
  TestCase tests[9] = {
       {"", 0},
       {"Hallo", 1},
       {"  Hallo", 1},
       {"Hallo", 1},
       {"  Hallo  ", 1},

       {"Hal lo", 2},
       {" Hal lo", 2},
       {"Hal lo ", 2},
       {" Hal lo  ", 2}
     };

  runTests(testNo,tests);

}