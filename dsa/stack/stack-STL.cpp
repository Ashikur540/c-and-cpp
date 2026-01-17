#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(5);

    // Accessing top element
    cout << "Top element: " << st.top() << endl;

    // Popping an element
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;

    stack<int> temp(st); // Create a copy

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}