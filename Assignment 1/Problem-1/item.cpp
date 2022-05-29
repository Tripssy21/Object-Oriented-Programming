#include "item.h"
#include <string.h>

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