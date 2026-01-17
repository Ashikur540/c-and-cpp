#include <iostream>
#include <stack>
using namespace std;

void print_rev(stack<int> &st) // pass by ref so that stack remains after function clear
{
    if (st.empty())
        return;

    int x = st.top(); // store top
    st.pop();         // remove top

    print_rev(st); // recursive call

    cout << x << " "; // print after recursion
    st.push(x);       // restore stack
}

int main()
{
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        st.push(n);
    }

    print_rev(st);
}