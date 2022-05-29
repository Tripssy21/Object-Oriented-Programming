#include "item.h"

class Stack
{
private:
    item *array;
    int top;
    int size;

public:
    Stack(unsigned size);
    int isEmpty();
    void push(item x);
    item pop();
    void display();
};