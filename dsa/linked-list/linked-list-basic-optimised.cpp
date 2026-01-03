#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;
    Node *next; // as next is a pointer which points tp a nodes so the type will be the Node type
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{

    Node a(10), b(220), c(30);
    // connections
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // print using connections

    cout << (*a.next).val << endl; // a dereferencing prints the value of the address it holds. So a.next is apointer which holds the value of b node.

    // dereference and access short form (->)
    cout << a.next->val << endl;

    return 0;
}