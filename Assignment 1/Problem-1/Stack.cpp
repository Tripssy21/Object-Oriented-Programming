#include "Stack.h"

Stack ::Stack(unsigned size)
{
    size = size;
    top = -1;
    array = (item *)malloc(size * sizeof(item));
}

//Function to check whether stack is empty or not (returns 1 when empty ese returns 0)
int Stack ::isEmpty()
{
    int res;
    if (top == -1)
    {

        res = 1;
    }
    else
    {
        res = 0;
    }
    return res;
}

// Function to add an item(new element) to the stack.
void Stack ::push(item x)
{
    if (top == size - 1) // Stack is full when top is equal to the last index
        return;
    else
    {
        array[++top] = x;
    }
}

// Function to remove an item from stack
item Stack ::pop()
{
    if (isEmpty())
    {
        std ::cout << "Stack is empty" << std ::endl;
        item null();
        return ;
    }
    else
    {
        return array[top--];
    }
}

//function to display elements of stack
void Stack ::display()
{
    std ::cout << "\n************************************************************************************\n";
    for (int i = 0; i <= top; i++)
    {
        std ::cout << "Item " << (i + 1) << std ::endl;
        std ::cout << "Item ID : " << array[i].get_item_id() << std ::endl;
        std ::cout << "Quantity : " << array[i].get_Quantity() << std ::endl;
        std ::cout << "Label : " << array[i].get_itemLable() << std ::endl;
    }
    std ::cout << "\n************************************************************************************\n";
}
