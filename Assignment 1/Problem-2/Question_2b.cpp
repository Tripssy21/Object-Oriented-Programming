//header file item.h
#include <iostream>
#include <string.h>

class item
{
private:
    int item_id;
    int Quantity;
    char itemLabel[10];

public:
    item(int, int, char *);
    int get_item_id();
    int get_Quantity();
    char *get_itemLable();
};

//item class defination file item.cpp
//item constructor
item ::item(int i = 0, int q = 0, char str[] = {0})
{
    item_id = i;
    Quantity = q;
    strcpy(itemLabel, str);
}

int item ::get_item_id()
{
    return item_id;
}

int item ::get_Quantity()
{
    return Quantity;
}

char *item ::get_itemLable()
{
    return itemLabel;
}

//Header file Stack.h
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
    void DeleteMiddle(int, int);
    item TopElement();
    void display();
};

//Stack class defination file Stack.cpp
//Stack constructor
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
        return -1;
    }
    else
    {
        return array[top--];
    }
}

item Stack ::TopElement()
{
    return array[top];
}
void Stack ::DeleteMiddle(int n, int curr = 0)
{
    if (isEmpty() || curr == n)
    {
        return;
    }
    item x = TopElement();
    pop();
    DeleteMiddle(n, curr + 1);
    if (curr != n / 2)
    {
        push(x);
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

//file containing main method main.cpp
int main()
{
    int size = 0;
    std ::cout << "Enter number of elemants in the stack : ";
    std ::cin >> size;
    Stack s(size);
    for (int i = 0; i < size; i++)
    {
        int item_id, Quantity;
        char itemLabel[10];
        std ::cout << "\nEnter Item ID : ";
        std ::cin >> item_id;
        std ::cout << "Enter Quantity : ";
        std ::cin >> Quantity;
        std ::cout << "Enter item Label : ";
        std ::cin >> itemLabel;
        std ::cout << std ::endl;
        item data(item_id, Quantity, itemLabel);
        s.push(data);
    }
    s.display();
    std ::cout << std ::endl;
    std ::cout << "After deleting middle element " << std ::endl;
    s.DeleteMiddle(size);
    s.display();
    return 0;
}
