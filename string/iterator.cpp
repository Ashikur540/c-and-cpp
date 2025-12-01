#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Ashikur Rahman";
    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << str[i];
    // }

    cout << *str.begin() << endl;     // str.begin() - a pointer in 0th index. T print value dereference
    cout << *(str.end() - 1) << endl; // a pointer after the last element. to print last char minus it

    // another iterator
    for (auto i = str.begin(); i < str.end(); i++)
    {
        cout << *i;
    }

    return 0;
}