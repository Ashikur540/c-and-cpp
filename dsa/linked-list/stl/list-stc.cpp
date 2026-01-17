#include <bits/stdc++.h>
using namespace std;
// all the methods are almost similer to vector
int main()
{

    list<int> l(5, 1);
    // print
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << "";
    // }
    cout
        << endl;
    list<int> l2(l); // copy l into l2

    // or  iterator
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}