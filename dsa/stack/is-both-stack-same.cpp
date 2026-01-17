#include <iostream>
#include <vector>
using namespace std;

class myStack
{
    vector<int> arr;

public:
    // push operation
    void push(int x)
    {
        arr.push_back(x);
    }

    // pop operation
    int pop()
    {
        if (arr.empty())
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int val = arr.back();
        arr.pop_back();
        return val;
    }

    // peek operation
    int peek()
    {
        if (arr.empty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr.back();
    }

    // check if stack is empty
    bool isEmpty()
    {
        return arr.empty();
    }

    // current size
    int size()
    {
        return arr.size();
    }
};

int main()
{
    myStack st1;
    myStack st2;
    int m, n;
    cin >> m;
    int flag;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    cin >> n;
    if (m != n)
    {
        cout << "No";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    while (!st1.isEmpty())
    {
        if (st1.pop() != st2.pop())
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}