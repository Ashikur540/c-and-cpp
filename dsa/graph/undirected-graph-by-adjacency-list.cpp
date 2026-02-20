#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, e;
    cin >> n >> e;           // nodes, edges
    vector<int> adj_list[n]; // array of int tye vectors - which is our adjacency list

    // take input
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        // go to a index of array and push b value in vector
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // undirected a->b || b->a both ways possible
    }

    // print
    for (int i = 0; i < n; i++) // array
    {
        cout << i << "-> "; // index
        for (int v : adj_list[i])
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
## when to use:
    When we need to know that a node is connected to which nodes then edgelist is efficient because it does that with less operation
*/