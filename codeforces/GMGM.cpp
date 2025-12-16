#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int total, d, c = 0;
        cin >> total >> d;
        int targets[total];
        bool isLong = false;

        for (int i = 0; i < total; i++)
        {
            cin >> targets[i];
        }
        for (int i = 0; i < total; i++)
        {

            if (targets[i] > d && !isLong)
            {
                isLong = true;
                c += 1;
            }
            else if (targets[i] <= d && isLong)
            {
                isLong = false;
                c += 1;
            }
        }
        cout << c << endl;
    }

    return 0;
}