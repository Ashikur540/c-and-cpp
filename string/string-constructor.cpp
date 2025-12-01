#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string s("hello"); // hello

    // string s("hello world", 5); // hello

    string s = "WowMan";
    string s1(s, 2); // wMan

    cout << s1 << endl;

    // loop shorthand
    for (char c : s)
    {
        cout << c << endl; // W o w M a n
    }

    return 0;
}