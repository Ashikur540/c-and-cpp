#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int M, i;
    cin >> s >> M;

    int p = 0;

    for (i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int c = 1;

        if (i + 1 < s.size() && isdigit(s[i + 1]))
        {
            c = s[i + 1] - '0';
            i++;
        }

        if (p + c >= M)
        {
            cout << ch;
            return 0;
        }
        p += c;
    }

    return 0;
}