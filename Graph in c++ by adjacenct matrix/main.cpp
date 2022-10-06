#include <bits/stdc++.h>

/// using adjacency matrix

using namespace std;

int main()
{
    int n,m; // n is the number of node and m is the number of edges
    cin>>n>>m;

    vector<vector<int>> adjMat(n, vector<int>(n)); // n*n matrix
//    int adjMat[n][n];
//
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<n; j++)
//        {
//            adjMat[i][j] = 0;
//        }
//    }


    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adjMat[u][v] = adjMat[v][u] = 1;
    }

    for(int u = 0; u<n; u++)
    {
        for(int v=0; v<n; v++)
        {
            cout<< adjMat[u][v] << " ";
        }
        cout<< endl;
    }
    return 0;
}

/**

6 6

0 1
1 2
2 3
3 4
4 5
3 5

**/
