#include <bits/stdc++.h>
using namespace std;
// all the methods are almost similer to vector
int main()
{

    list<int> l(5, 1);
    list<int> l2;
    l2 = l; // copy l into l2

    l2.push_back(20);   // insert at tails
    l2.push_front(102); // insert at head
    l2.insert(l.begin(), 2, 37);
    // or  iterator
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}