#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int T;
    // cin >> T;

    // while (T--)
    // {
        string s, t;
        cin >> s >> t;

        int sSize = s.length();
        int tSize = t.length();
        string merged = "";
        for (int i = 0; i < sSize; i++)
        {
            for (int j = 0; i < tSize; j++)
            {
                merged = merged + s[i] + t[j];
                cout << merged;
            }
        }

        cout << endl;
    // }
    return 0;
}
