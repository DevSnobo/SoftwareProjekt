// String.h
#include <iostream>
using namespace std;

class String {
private:
    char* str;
public:
    // 'String' is represented internally as a plain C-style string.
    int size;
    String();
    String(char c);
    String(const char *);
    String(const String&);
    ~String();

    char& operator[](int index);
    String& operator=(String&);
    String& operator+=(String&);

    // make friend, so we can access private members
    friend ostream& operator<< (ostream &out, String &s);

};