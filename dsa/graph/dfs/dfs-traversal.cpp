#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];

void dfs_traversal(int source)
{
    // base case -not needed cz when all are visited the loop auto stops and recursion
    cout << source << " ";
    visited[source] = true; // set visited flag for it
    // then explore it's childs

    for (auto child : adj_list[source]) // adj_list er source index has its all childs
    {
        if (!visited[child]) // if child is nnot visited then only explore
        {
            dfs_traversal(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    // input
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // list construct
    }
    memset(visited, false, sizeof(visited));

    dfs_traversal(0); // can be taken from input

    return 0;
}