#include <iostream>
#include "String.h"


ostream &operator<<(ostream &out, String &s) {
    for (int i = 0; i < s.size; i++) {
        out << s.str[i];
    }
    return out;
}

int main() {
    String s;
    String s2('H');
    String s3("Hallo");
    String s4(s3);
    String s5 = s4[2];
    String s6 = s.operator=(s3);
    String s7 = s3.operator+=(s2);

    cout << "1: " << s << endl;
    cout << "1: " << s.size << endl << endl;

    cout << "2: " << s2 << endl;
    cout << "2: " << s2.size << endl << endl;

    cout << "3: " << s3 << endl;
    cout << "3: " << s3.size << endl << endl;

    cout << "4: " << s4 << endl;
    cout << "4: " << s4.size << endl << endl;

    cout << "5: " << s5 << endl;
    cout << "5: " << s5.size << endl << endl;

    cout << "6: " << s6 << endl;
    cout << "6: " << s6.size << endl << endl;

    cout << "7: " << s7 << endl;
    cout << "7: " << s7.size << endl;
}

