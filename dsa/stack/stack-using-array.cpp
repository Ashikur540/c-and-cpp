#include <iostream>
#include <vector>
using namespace std;

/**
 * Stack always uses top (last) for ttracing. As elements inserts and deletes, see through the top only
 */

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
    cout << "Popped: " << st.pop() << endl;

    // checking top element
    cout << "Top element: " << st.peek() << endl;

    // checking if stack is empty
    cout << "Is stack empty: " << (st.isEmpty() ? "Yes" : "No") << endl;

    // checking current size
    cout << "Current size: " << st.size() << endl;
}