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

void push(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *flag = head;
    while (flag->next != NULL) // until goes to last node
    {
        flag = flag->next;
    }
    flag->next = newNode;
    // newNode->next = newNode;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    // connections (head->a->b)
    head->next = a;
    a->next = b;
    // operation
    insert_at_head(head, 100);
    insert_at_head(head, 200);
    insert_at_head(head, 300);
    push(head, 99);
    push(head, 124);
    // printing
    print_linked_list(head);

    return 0;
}