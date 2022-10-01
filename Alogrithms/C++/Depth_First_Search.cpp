#include<bits/stdc++.h>
using namespace std;
//depth first search algorithm
void dfs(int s,vector<int> adj[],bool visited[])
{
    visited[s]=true;
    cout<<s<<" ";
    for(int u:adj[s])
    {
        if(visited[u]==false)
        {
            dfs(u,adj,visited);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool visited[n+1];
    for(int i=0;i<=n;i++)
    {
        visited[i]=false;
    }
    dfs(1,adj,visited);
    return 0;
}