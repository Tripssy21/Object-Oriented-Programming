#include "Strings.h"

String::String()
{
    data = NULL;
    length = 0;
}

String::String(const char *s)
{
    length = strlen(s);
    data = new char[length];
    strcpy(data, s);
}

String::String(const String &s)
{
    length = s.length;
    data = new char[length];
    strcpy(data, s.data);
}

char &String::operator[](int index)
{
    assert(index >= 0 && index < length);
    return data[index];
}

String operator+(const String &s, const String &t)
{
    String res = String();
    res.length = s.length + t.length + 1;
    res.data = new char[res.length];
    strcpy(res.data, strcat(strcat(s.data, " "), t.data));
    return res;
}

int operator>=(const String &s, const String &t)
{
    int res = strcmp(s.data, t.data);
    if (res >= 0)
    {
        return 1;
    }
    return -1;
}

int operator==(const String &s, const String &t)
{
    return strcmp(s.data, t.data) == 0;
}

int operator!=(const String &s, const String &t)
{
    return !(s == t);
}

void display(const String s)
{
    std ::cout << s.data << std ::endl;
}

String::~String()
{
    delete[] data;
}