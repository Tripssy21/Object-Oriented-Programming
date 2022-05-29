#include "Strings.h"

int main()
{
    String a = String("Snake");
    String b = String("Ladders");
    String c = String("and");
    String d = a + c + b;
    String e = String("LUDO");
    String f = String("Snake and Ladders");
    std ::cout << (d >= e) << std ::endl;       // 1 as it is true
    std ::cout << (d == e) << std ::endl;       // 0 as it is not true
    std ::cout << (d == f) << std ::endl;       // 1 as it is true
    std ::cout << f[4] << std ::endl;       // returns data at index 4
    std ::cout << (d != e) << std ::endl;       // 1 as it is true
    display(d);
    return 0;
}
