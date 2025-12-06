#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s, x;
        cin >> s >> x;

        int strSize = s.length();
        int xSize = x.length();

        for (int i = 0; i < strSize; i++)
        {
            // check if substring can fit
            if (i + xSize <= strSize)
            {
                string temp(s.begin() + i, s.begin() + i + xSize);

                if (temp == x)
                {
                    cout << "#";
                    i += xSize - 1; // skip count
                    continue;
                }
            }

            // No match print original char
            cout << s[i];
        }

        cout << endl;
    }
    return 0;
}
