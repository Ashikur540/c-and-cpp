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

class myStack
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
            cout << "Stack Underflow" << endl;
            return;
        }

        Node *target = tail;
        tail = tail->prev;
        // means you removed the last element of list so now head reference is deleted and tail should be NULL as we moved to prev element of head which was null. So now we need to check if tail is NULL then return
        if (tail == NULL)
        {
            head = NULL; // make the head NULL
        }
        tail->next = NULL; // Now safely make as as program will return if tail is NULL
        delete target;
        sz--;
    }

    // peek operation
    int peek()
    {
        if (head == NULL)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return tail->val;
    }

    // check if stack is empty
    bool isEmpty()
    {
        return head == NULL;
    }

    // current size
    int size()
    {
        // int sz = 0;
        // Node *flag = head;
        // while (flag != NULL)
        // {
        //     flag = flag->next;
        //     sz += 1;
        // }

        return sz;
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x); // push the inputs in stack as input
    }

    // popping one element
    st.pop();
    // st.pop();
    // checking top element
    cout << "Top element: " << st.peek() << endl;

    // checking if stack is empty
    cout << "Is stack empty: " << (st.isEmpty() ? "Yes" : "No") << endl;

    // checking current size
    cout << "Current size: " << st.size() << endl;
}