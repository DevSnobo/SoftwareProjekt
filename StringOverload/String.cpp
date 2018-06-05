// String.cpp
#include "String.h"
#include <iostream>

using namespace std;


//Konstruktor

//Kopierkonstruktor

//Zuweisungsoperator

//Destruktor

/*
 * Zu überladende Operationen:
 * "+=" Konkatenation
 * "="  Zuweisung
 * "[]" Arrayzugriff
 */




String::String() {
    size = 0;
    str = new char[1];
    str[0] = '\0';
}


String::String(char c) {
    size = 1;
    str = new char[2];
    str[0] = c;
    str[1] = '\0';
}

String::String(const char *s) {

    auto *temp = const_cast<char *>(s);
    unsigned short i = 0;

    for (i; temp != ""; temp++) {
        i++;
    }

    size = i;
    str = new char[i + 1];
    str[i] = '\0';
}

String::String(const String &s) {
    //String::String(&s[0]);
}

String::~String() {
    delete[] str;
}

char &String::operator[](int index) {
    // TODO
}

String &String::operator=(String &s) {
    // TODO
}

String &String::operator+=(String &s) {
    // TODO
}