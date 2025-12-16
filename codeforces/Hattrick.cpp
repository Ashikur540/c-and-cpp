#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string runs[6];

        for (int i = 0; i < 6; i++)
        {
            cin >> runs[i];
        }

        bool hatrick = false;

        for (int i = 0; i <= 3; i++)
        {
            if (runs[i] == "W" && runs[i + 1] == "W" && runs[i + 2] == "W")
            {
                hatrick = true;
                break;
            }
        }

        cout << (hatrick ? "YES" : "NO") << endl;
    }

    return 0;
}
