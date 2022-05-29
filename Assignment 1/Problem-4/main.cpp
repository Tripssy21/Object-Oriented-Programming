#include "LinkedList.h"

int main()
{
    LinkedList listA;
    std ::vector<ComplexInteger> array;
    array.push_back(ComplexInteger(12, 71));
    array.push_back(ComplexInteger(13, 51));
    array.push_back(ComplexInteger(19, 18));
    array.push_back(ComplexInteger(21, 1));
    array.push_back(ComplexInteger(85, 61));
    array.push_back(ComplexInteger(1, 1));
    listA = array;
    listA + ComplexInteger(0,0);
    display(listA);

    listA >> 12;
    display(listA);

    listA << 12;
    display(listA);

    listA*2;
    display(listA);

    return 0;
}