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
/**
 * Why we need dynamic node ?
 * We will do everything using function like add a new node, deleting etc. In those function we will not return anything. We will just act the functionality. So fo that as its  static and stores in static memory so the data will get removed after performing the function. Thats why we need dynamic memory and so we are creating dynamic node so that after performing function the data not deletes from the memory as the node data blongs in dynamic memory
 */

int main()
{

    Node *head = new Node(10); // head pointer is in stack/static memory but node is in heap/dynamic memory. Here head is pointing to the Node [10|Null]

    /*
    * Visualization of Dynamic node
    |---------|    |---------|
    |  [3C]   |    |[10|NULL]|
    |  HEAD   |    |Node(3C) |
    |---------|    |---------|
      stack Memory   Heap memory
    */
    Node *a = new Node(20);
    Node *b = new Node(30);
    // connections (head->a->b)
    head->next = a;
    a->next = b;
    // printing

    Node *flag = head;
    int sum = 0;
    while (flag != NULL) // until goes to last node
    {
        cout << flag->val << " ";
        sum += flag->val;
        flag = flag->next; // moving the flag to next and next time printing that
    }
    cout << endl
         << "Total :" << sum << " ";
    return 0;
}