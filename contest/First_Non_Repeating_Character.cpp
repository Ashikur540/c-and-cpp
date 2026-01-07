#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i, a = -1, v = 0;

    int f[26] = {0};
    for (i = 0; i < s.length(); i++)
    {
        f[s[i] - 'a']++;
    }
    for (i = 0; i < s.length(); i++)
    {
        if (f[s[i] - 'a'] == 1)
        {
            a = i;
            v = 1;
            break;
        }
    }
    if (v == 1)
    {
        cout << s[a];
    }
    else
    {
        cout << "-1";
    }

    return 0;
}