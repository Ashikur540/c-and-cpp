#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r, c;
    if (!(cin >> r >> c))
        return 0;

    int arr[101][101];
    long long sumRow[101] = {0};
    bool hasZero[101] = {false};

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            sumRow[i] += arr[i][j];
            if (arr[i][j] == 0)
            {
                hasZero[i] = true;
            }
        }
    }

    if (r == 1)
    {
        cout << "YES" << endl;
        return 0;
    }

    bool foundFirstFixed = false;
    long long targetSum = 0;
    bool possible = true;

    for (int i = 0; i < r; i++)
    {
        if (!hasZero[i])
        {
            if (!foundFirstFixed)
            {
                targetSum = sumRow[i];
                foundFirstFixed = true;
            }
            else
            {
                if (sumRow[i] != targetSum)
                {
                    possible = false;
                    break;
                }
            }
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}