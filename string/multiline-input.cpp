#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    string s;
    cin.ignore();    // so that new line after T gets ignored
    getline(cin, s); // getline naturally takes new line as input but cin ignores!!

    cout << T << endl;
    cout << s << endl;

    return 0;
}