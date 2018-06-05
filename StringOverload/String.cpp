// String.cpp
#include "String.h"
#include <iostream>

using namespace std;

String::String() {
    size = 0;
    str = new char[1];
    str[0] = '\0';
}

String::String(char c) {
    size = 0;

    if (c != '\0')
        size++;

    str = new char[size + 1];
    str[size - 1] = c;

    if (size > 0)
        str[size] = '\0';
}

String::String(const char *s) {
    size = 0;

    while (s[size] != '\0') {
        size++;
    }
    str = new char[size + 1];

    for (int i = 0; i < size; ++i) {
        str[i] = s[i];
    }
    str[size] = '\0';
}

String::String(const String &s) {
    size = s.size;
    str = new char[size];

    for (int i = 0; i < size; ++i) {
        str[i] = s.str[i];
    }
    str[size] = '\0';
}

String::~String() {
    delete[] str;
}

char &String::operator[](int index) {
    /*
     * OutOfBounds handling would be needed here
     */
    return this->str[index];
}

String &String::operator=(String &s) {
    size = s.size;
    char *copy = new char[s.size + 1];

    for (int i = 0; i <= size; ++i) {
        copy[i] = s.str[i];
    }

    delete[] str;
    str = copy;

    return *this;
}

String& String::operator+=(String& s) {
    int prevSize = size;
    size += s.size;

    char* c = new char[size + 1];
    for (int i = 0; i < prevSize; i++)
        c[i] = str[i];

    for (int j = 0; j <= s.size; j++)
        c[prevSize + j] = s.str[j];

    delete[] str;
    str = c;

    return *this;
}