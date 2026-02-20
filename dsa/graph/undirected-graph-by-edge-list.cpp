#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, e;
    cin >> n >> e;
    // will keep int type pairs in vector index
    vector<pair<int, int>> edge_list;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b}); // push pairs
    }
    // print paired vector
    for (pair<int, int> p : edge_list)
    {
        cout << p.first << ", " << p.second << endl;
    }

    return 0;
}
