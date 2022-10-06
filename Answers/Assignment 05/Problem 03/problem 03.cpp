#include <bits/stdc++.h>

using namespace std;


void dfs(int u, vector<int> &vis, vector<vector<int>> &adj, vector<int> &connectedComponents)
{
    vis[u] = 1;
    connectedComponents.push_back(u);
    for(int i=0; i<adj[u].size(); i++)
    {
        int v = adj[u][i];
        if(vis[v] == 0)
        {
            dfs(v, vis, adj, connectedComponents);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>vis(n+1);

    cout<< "\n\n";
    int j = 0;

    for(int u=1; u<=n; u++)
    {
        if(vis[u] == 0)
        {
            vector<int> connectedComponents;
            dfs(u, vis, adj, connectedComponents);

            cout<< "(" << (char)( (j++) +'a')<< ") ";
            for(int v: connectedComponents)
            {
                cout<< v << " ";
            }
            cout<< endl;
        }
    }
    return 0;
}


/**
6 4

1 2
2 5
3 6
5 1

**/

