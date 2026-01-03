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

void print_linked_list(Node *head)
{
    Node *flag = head;
    while (flag != NULL) // until goes to last node
    {
        cout << flag->val << " ";
        flag = flag->next; // moving the flag to next and next time printing that
    }
}
// gave reference so that we get the change effect in main function other wise the value will be lost because passing reference don't create a new copy of the pointer in memory
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    newNode->next = head;
    head = newNode;
}

// insert at tail or last
void push(Node *head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;
}
// insert an any pos
void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *flag = head;
    int i = 0;
    for (int i = 0; i < pos - 1; i++) // until goes before the pos
    {
        flag = flag->next;
        i++;
    }
    // now flag is currently right before the target element
    newNode->next = flag->next;
    flag->next = newNode;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    // connections (head->a->b)
    head->next = a;
    a->next = tail;
    // operation
    insert_at_head(head, 100);
    insert_at_head(head, 200);

    push(head, tail, 99);
    push(head, tail, 200);
    // push(head, tail, 199);
    insert(head, 1, 898);
    // printing
    print_linked_list(head);

    return 0;
}