#include "Node.h"

class LinkedList
{
private:
    int size;
    Node *head;

public:
    LinkedList();
    LinkedList(const LinkedList &list);

    friend void display(const LinkedList &list);
    friend bool search(const LinkedList &list, ComplexInteger &c);

    void operator+(const ComplexInteger &c);
    void operator+(const LinkedList &list);
    bool operator-();
    bool operator*(int index);
    void operator=(const LinkedList &list);
    void operator=(const std ::vector<ComplexInteger>& array);
    void operator>>(int k);
    void operator<<(int k);
    ~LinkedList();
};