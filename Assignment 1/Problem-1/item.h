#include <iostream>

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
