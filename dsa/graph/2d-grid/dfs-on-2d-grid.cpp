#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool visited[105][105];                                                // here everything is 2d array thats why its also 2d
vector<pair<int, int>> movements = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // up , down left, right

int m, n;

void dfs_traversal(int sr, int sc)
{
    if (sr < 0 || sr >= n || sc < 0 || sc >= m)
        return;
    // base case -not needed cz when all are visited the loop auto stops and recursion
    cout << sr << " " << sc << endl;
    visited[sr][sc] = true; // set visited flag for it
    // then explore it's childs source row and col

    for (int i = 0; i < 4; i++) // Each nodes has at most 4 childs or we can say 4 ways to moved that's why loop is constant
    {
        // current children index[row,col]
        int cr = sr + movements[i].first;
        int cc = sc + movements[i].second;
        // cout << cr << " " << cc << endl;
        if (!visited[cr][cc]) // not visited then only explore childs
        {
            dfs_traversal(cr, cc);
        }
    }
}

int main()
{

    cin >> n >> m;

    // grids input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int si, sj; // source i , j - row, col
    cin >> si >> sj;
    dfs_traversal(si, sj);
    // print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

Usually it can perform traverse in 8 directions. From them mostly first 4 are used.
The directions are:

1. UP= r-1,c
2.DOWN= r+1,c
3.LEFT= r,c+1
4.RIGHT= r,c-1
5.TOP_RIGHT_Angle (/)=



*/

// #include <bits/stdc++.h>
// using namespace std;

// // Constraints are up to 1000x1000
// char grid[1005][1005];
// bool visited[1005][1005];
// int n, m;

// // To keep track if we ever found room B
// bool found = false;

// void dfs_traversal(int r, int c)
// {
//     // 1. Base Case: Check if out of bounds
//     if (r < 0 || r >= n || c < 0 || c >= m)
//     {
//         return;
//     }

//     // 2. Base Case: Check if it's a wall or already visited
//     if (grid[r][c] == '#' || visited[r][c])
//     {
//         return;
//     }

//     // Mark current cell as visited
//     visited[r][c] = true;

//     // 3. Check if we reached room B
//     if (grid[r][c] == 'B')
//     {
//         found = true;
//         return;
//     }

//     // 4. Explore neighbors (up, down, left, right)
//     dfs_traversal(r - 1, c); // Up
//     dfs_traversal(r + 1, c); // Down
//     dfs_traversal(r, c - 1); // Left
//     dfs_traversal(r, c + 1); // Right
// }

// int main()
// {
//     // Take height and width input
//     cin >> n >> m;

//     int si, sj; // Starting coordinates for room A

//     // Grids input and find starting point A
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid[i][j];
//             if (grid[i][j] == 'A')
//             {
//                 si = i;
//                 sj = j;
//             }
//         }
//     }

//     // Start DFS from room A
//     dfs_traversal(si, sj);

//     // Output result based on whether B was reached
//     if (found)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }