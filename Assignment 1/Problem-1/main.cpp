#include "Stack.h"

int main()
{
    int num = 0;
    std ::cout << "Enter number of elemants in the stack : ";
    std ::cin >> num;
    Stack s(num);
    for (int i = 0; i < num; i++)
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
    std ::cout << "After removing an element " << std ::endl;
    item item_obj = s.pop();
    s.display();
    return 0;
}