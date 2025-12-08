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
        int total_rooms = 0;
        for (int i = 0; i < clgs; i++)
        {
            cin >> teams[i];
            total_rooms += ceil(double(teams[i]) / 2);
        }

        cout << total_rooms << endl;
    }

    return 0;
}