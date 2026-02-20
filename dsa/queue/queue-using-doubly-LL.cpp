#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

/**
 * Queue always maintains a front(first) and back (last) flag for tracing. As queue inserts through back and removes through front
 **/
class myQueue
{
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

public:
    // push operation- insert at tail
    void push(int x)
    {
        Node *newNode = new Node(x);
        sz++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    // pop operation
    void pop()
    {
        if (head == NULL)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        Node *target = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL; // make the tail NULL
        }
        head->prev = NULL; // Now safely make as program will return if tail is NULL
        delete target;
        sz--;
    }

    // peek operation
    int back()
    {
        if (head == NULL)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return tail->val;
    }

    int front()
    {
        if (head == NULL)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return head->val;
    }

    // check if stack is empty
    bool isEmpty()
    {
        return head == NULL;
    }

    // current size
    int size()
    {
        return sz;
    }
};

int main()
{
    myQueue qu;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        qu.push(x); // push the inputs in stack as input
    }

    // popping one element
    qu.pop();
    // st.pop();
    // checking top element
    cout << "Top element: " << qu.back() << endl;

    // checking if stack is empty
    cout << "Is stack empty: " << (qu.isEmpty() ? "Yes" : "No") << endl;

    // checking current size
    cout << "Current size: " << qu.size() << endl;
    // print
    while (!qu.isEmpty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }
}