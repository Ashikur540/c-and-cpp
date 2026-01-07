#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;
    Node *next; // as next is a pointer which points tp a nodes so the type will be the Node type
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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

void print_reverse_linked_list(Node *tail)
{
    Node *flag = tail;
    while (flag != NULL) // until goes to last node
    {
        cout << flag->val << " ";
        flag = flag->prev; // moving the flag to prev and next time printing that
    }
}

// insert at tail or last
void push(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
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
    newNode->next = flag->next; // new to next
    flag->next->prev = newNode; // next to prev(NewNode)
    flag->next = newNode;       // f;ag to new node
    newNode->prev = flag;       // new node to prev
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void delete_at_head(Node *&head, Node *&tail)
{
    Node *target_node = head;
    head = head->next; // just ppoint to next
    head->prev = NULL;
    delete target_node; // clearing memory

    // if onlyy 1 element
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
}

// delete from tail

void pop(Node *&head, Node *&tail)
{
    Node *target_node = tail;
    tail = tail->prev; // just ppoint to next
    tail->next = NULL;
    delete target_node; // clearing memory

    // if onlyy 1 element
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
}

void delete_at(Node *head, int pos)
{

    Node *flag = head;
    Node *target_node = NULL;
    int i = 0;
    for (int i = 0; i < pos - 1; i++) // until goes before the pos
    {
        flag = flag->next;
        i++;
    }
    target_node = flag->next;
    flag->next = target_node->next;
    target_node->prev = flag;
    delete target_node;
}

int main()
{

    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *tail = new Node(30);
    Node *head = NULL;
    Node *tail = NULL;
    // connections
    // head->next = a;
    // a->next = tail;
    // a->prev = head;
    // tail->prev = a;

    int val;
    // take input . Here in input (-1) means end of input
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        push(head, tail, val);
    }

    // operations
    insert_at_head(head, 99);
    push(head, tail, 100);
    insert(head, 5, 89);
    delete_at(head, 2);

    // print
    print_linked_list(head);
    cout << endl
         << "----- Printing backword -----" << endl;
    print_reverse_linked_list(tail);

    return 0;
}