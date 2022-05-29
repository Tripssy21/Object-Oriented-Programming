#include "LinkedList.h"

LinkedList ::LinkedList()
{
    head = NULL;
    size = 0;
}

LinkedList ::LinkedList(const LinkedList &list)
{
    Node *temp = list.head;
    while (temp != NULL)
    {
        (*this) + temp->data;
        temp = temp->next;
    }
}

void LinkedList ::operator+(const ComplexInteger &c)
{
    size++;
    Node *new_node, *temp = head;
    new_node = (Node *)malloc(sizeof(Node));
    new_node->next = NULL;
    new_node->data = c;
    if (!head)
    {
        head = new_node;
        return;
    }
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void LinkedList::operator+(const LinkedList &list)
{
    if (!list.size)
    {
        return;
    }
    size += list.size;
    Node *temp = head;
    if (!head)
    {
        head = list.head;
        return;
    }
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = list.head;
}
bool LinkedList::operator-()
{
    if (!head)
    {
        return false;
    }
    size--;
    if (!head->next)
    {
        delete head;
        head = NULL;
        return true;
    }
    Node *temp = head, *prev = NULL;
    while (!temp->next)
    {
        prev = temp;
        temp = temp->next;
    }
    delete temp;
    prev->next = NULL;
    return true;
}

bool LinkedList::operator*(int index)
{
    if (!head || size < index)
    {
        return false;
    }
    size--;
    if (index == 1 && size == 1)
    {
        delete head;
        head = NULL;
        return true;
    }
    Node *temp = head, *prev = NULL;
    int count = 1;
    while (count != index)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }
    prev->next = temp->next;
    delete temp;
    return true;
}
void LinkedList ::operator=(const LinkedList &list)
{
    Node *temp = list.head;
    while (temp != NULL)
    {
        (*this) + temp->data;
        temp = temp->next;
    }
}

void LinkedList::operator=(const std ::vector<ComplexInteger> &array)
{
    for (ComplexInteger a : array)
    {
        (*this) + a;
    }
}

void LinkedList::operator<< (int k)
{
    k = k % size;
    int count = 0;
    Node *temp = head, *prev = NULL;
    while(count != k)
    {
        count++;
        prev = head;
        head = head->next;
    }
    prev->next = NULL;
    prev = head;
    while(prev->next)
    {
        prev = prev->next;
    }
    prev->next = temp;
}

void LinkedList::operator>>(int k)
{
    (*this) << (size - k % size);
}

void display(const LinkedList &list)
{
    if (list.size == 0)
    {
        std ::cout << "List is Empty" << std ::endl;
        return;
    }
    Node *temp = list.head;
    while (temp->next)
    {
        temp->data.display();
        std ::cout << " - > ";
        temp = temp->next;
    }
    temp->data.display();
    std ::cout << std ::endl;
}

bool search(const LinkedList &list, ComplexInteger &c)
{
    int real = c.getReal(), imaginary = c.getImaginary();
    Node *temp = list.head;
    bool found = false;
    while (temp != NULL && !found)
    {
        if ((temp->data).getReal() == real && (temp->data).getImaginary() == imaginary)
            found = true;
        temp = temp->next;
    }
    return found;
}

LinkedList ::~LinkedList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *del = temp;
        temp = temp->next;
        delete del;
        del = NULL;
    }
    head = NULL;
}
