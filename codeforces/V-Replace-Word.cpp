#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int c = 0;
    // cout << str.find("EGYPT");
    // int ar[5] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'E' && str[i + 1] == 'G' && str[i + 2] == 'Y' && str[i + 3] == 'P' && str[i + 4] == 'T')
        {
            cout << " ";
            i += 4;
        }
        else
        {
            cout << str[i];
        }
    }

    return 0;
}