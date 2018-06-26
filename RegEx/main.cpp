// Main fuer Teilaufgabe 1
// Bitte weitere Testfaelle hinzufuegen.


#include "RE.h"
#include <iostream>

using namespace std;

int main() {

    // c + c
    RE* r3 = new Alt (new Ch('c'), new Ch('c'));

    cout << "1.: " << r3->pretty() << endl;

    cout << "2.: " << r3->simp()->pretty() << endl;

    // c**
    RE* r5 = new Star(new Star (new Ch('c')));

    cout << "3.: " << r5->pretty() << endl;
    cout << "4.: " << r5->simp()->pretty() << endl;

    // phi*
    RE* r6 = new Star(new Phi());

    cout << "5.: " << r6->pretty() << endl;
    cout << "6.: " << r6->simp()->pretty() << endl;

    // (phi + c) + c**
    RE* r7 = new Alt(r3,r5);

    cout << "7.: " << r7->pretty() << endl;
    // exhaustively apply simplifications
    cout << "8.: " << simpFix(r7)->pretty() << endl;

    RE* r8 = new Conc(new Ch('a'), new Conc(new Ch('b'), new Eps));

    cout << "9.: " << simpFix(r8)->pretty() << endl;

    char* test = const_cast<char *>("eps ((a*)* (phi + b))");

    RE* r9 = new Conc(new Eps, new Conc(new Star(new Star(new Ch('a'))),
                                        new Alt(new Phi, new Ch('b'))));

    RE* r10 = new Conc(new Star(new Star(new Ch('a'))), new Alt(new Phi, new Ch('b')));

    cout << "10.: " << r9->pretty() << endl;
    cout << "11.: " << r9->simp()->pretty() << endl;
}