#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int ar[5] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        switch (str[i])
        {
        case 'e':
            ar[0] += 1;
            break;
        case 'E':
            ar[0] += 1;
            break;
        case 'g':
            ar[1] += 1;
            break;
        case 'G':
            ar[1] += 1;
            break;
        case 'y':
            ar[2] += 1;
            break;
        case 'Y':
            ar[2] += 1;
            break;
        case 'p':
            ar[3] += 1;
            break;
        case 'P':
            ar[3] += 1;
            break;
        case 't':
            ar[4] += 1;
            break;
        case 'T':
            ar[4] += 1;
            break;
        }
    }
    // occurrences
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ar[i] << " ";
    // }
    int min_value = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        min_value = min(min_value, ar[i]);
    }

    cout << min_value << endl;

    return 0;
}