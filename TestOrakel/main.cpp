// Main fuer Teilaufgabe 1
// Bitte weitere Testfaelle hinzufuegen.


#include "RE.h"
#include "TestOrakel.h"
#include <iostream>

using namespace std;

int main() {

    RE *r;
    RE *rSimp;
    bool b;
    string pattern;

    cout << "-----------------------------------------------------------------" << endl;

    {
        cout << "Regel 1: eps r ==> r" << endl;
        r = new Conc(new Eps, new Ch('a'));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 1: eps r ==> r" << endl;
        r = new Conc(new Eps, new Ch('a'));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "b";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 2: r1 r2 ==> phi, falls L(r1) | L(r2) = {}" << endl;
        r = new Conc(new Phi, new Ch('a'));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "phi";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 2: r1 r2 ==> phi, falls L(r1) | L(r2) = {}" << endl;
        r = new Conc(new Phi, new Phi);
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "phi";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 2: r1 r2 ==> phi, falls L(r1) | L(r2) = {}" << endl;
        r = new Conc(new Eps, new Ch('a'));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "phi";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 3: r* ==> eps, falls L(r) = {}" << endl;
        r = new Star(new Phi);
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "b";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 3: r* ==> eps, falls L(r) = {}" << endl;
        r = new Star(new Ch('a'));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "b";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 4: (r*)* ==> r*" << endl;
        r = new Star(new Star(new Ch('a')));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "b";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 4: (r*)* ==> r*" << endl;
        r = new Star(new Star(new Conc(new Star(new Ch('b')), new Star(new Ch('a')))));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "c";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 5: r + r ==> r" << endl;
        r = new Alt(new Ch('c'), new Ch('c'));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 5: r + r ==> r" << endl;
        r = new Alt(new Eps, new Eps);
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 6: r1 + r2 ==> r1, falls L(r2) = {}" << endl;
        r = new Alt(new Eps, new Phi);
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 6: r1 + r2 ==> r1, falls L(r2) = {}" << endl;
        r = new Alt(new Ch('b'), new Phi);
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 6: r1 + r2 ==> r1, falls L(r2) = {}" << endl;
        r = new Alt(new Star(new Ch('b')), new Phi);
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 6: r1 + r2 ==> r1, falls L(r2) = {}" << endl;
        r = new Alt(new Star(new Phi), new Phi);
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 7: r1 + r2 ==> r2, falls L(r1) = {}" << endl;
        r = new Alt(new Phi, new Star(new Ch('b')));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 7: r1 + r2 ==> r2, falls L(r1) = {}" << endl;
        r = new Alt(new Phi, new Ch('b'));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 7: r1 + r2 ==> r2, falls L(r1) = {}" << endl;
        r = new Alt(new Phi, new Eps);
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 7: r1 + r2 ==> r2, falls L(r1) = {}" << endl;
        r = new Alt(new Phi, new Star(new Eps));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        cout << "Regel 7: r1 + r2 ==> r2, falls L(r1) = {}" << endl;
        r = new Alt(new Phi, new Star(new Phi));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    cout << "-----------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------" << endl;

    {
        r = new Conc(new Ch('a'), new Conc(new Ch('b'), new Eps));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        r = new Conc(new Eps, new Conc(new Star(new Star(new Ch('a'))), new Alt(new Phi, new Ch('b'))));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }

    {
        r = new Conc(new Star(new Star(new Ch('a'))), new Alt(new Phi, new Ch('b')));
        cout << r->pretty() << endl;
        cout << r->simp()->pretty() << endl;

        rSimp = r->simp();
        pattern = "a**";
        b = orakel(r, rSimp, pattern);
        cout << "Orakel Input ist " << "r: " << r->pretty()
             << ", rSimp: " << rSimp->pretty() << ", string: " << pattern << endl;
        cout << "Orakel sagt: " << (b ? "OK" : "FAIL") << endl;
        cout << "-----------------------------------------------------------------" << endl;
    }
}
