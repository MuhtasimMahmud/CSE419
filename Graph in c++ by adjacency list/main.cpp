#include <bits/stdc++.h>

/// using adjacency list


using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;   // n is the number of nodes and m is the number of edges

    vector<vector<int>> adjList(n);

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }


    // printing the graph

    for(int u=0; u<n; u++)
    {
        cout<< u << " : ";
        for(int i=0; i<adjList[u].size(); i++)
        {
            int v = adjList[u][i];
            cout<< v <<" ";
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
