#include <iostream>
#include <string.h>
#include <assert.h>

class String
{
private:
    char *data;
    int length;

public:
    String();
    String(const char *s);
    String(const String &s);

    friend String operator+(const String &s, const String &t);
    friend int operator>=(const String &s, const String &t);
    friend int operator==(const String &s, const String &t);
    friend int operator!=(const String &s, const String &t);
    char &operator[](int index);
    friend void display(const String s);

    ~String();
};
