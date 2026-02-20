#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, e; // nodes, edges
    cin >> n >> e;

    int adj_mat[n][n];

    // then make all element to 0
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            adj_mat[r][c] = 0;
        }
    }
    // another approach to make it fully 0
    memset(adj_mat, 0, sizeof(adj_mat));
    // take input pairs of connections
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        // and then make the relative points value to 1 in 1 way because as its directed graph. a->b possible but b->a are not possible.
        adj_mat[a][b] = 1;
        // adj_mat[b][a] = 1;
    }
    // make diagonal values 1 as each node has its own cycle means a->a (a can reach to a or cycle through a)
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if (r == c)
            {
                adj_mat[r][c] = 1;
            }
        }
    }

    // print
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cout << adj_mat[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
## when to use:
    When we need to work with edge only
*/