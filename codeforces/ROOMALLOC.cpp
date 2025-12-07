#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int clgs;
        cin >> clgs;

        int teams[clgs];
        int total_members = 0;
        for (int i = 0; i < clgs; i++)
        {
            cin >> teams[i];
            total_members += teams[i];
        }

        cout << ceil(double(total_members) / 2) << endl;
    }

    return 0;
}