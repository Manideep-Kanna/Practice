
#include<bits/stdc++.h>
using namespace std;
void dfs(int i,vector<int>adj[],vector<int>&vis){
    vis[i]=1;
    cout<<i<<" ";
    for(auto it:adj[i]){
        if(!vis[it]){
            dfs(it,adj,vis);
        }
    }
}
void addEdge(int u,int v,vector<int>adj[]){
adj[u].push_back(v);
adj[v].push_back(u);
}
int main()
{
    // Create a graph given in the above diagram
    int V=4;
    vector<int>adj[V];
    vector<int>vis(V+1,0);
    addEdge(0, 1,adj);
    addEdge(0, 2,adj);
    addEdge(1, 2,adj);
    addEdge(2, 0,adj);
    addEdge(2, 3,adj);
    addEdge(3, 3,adj);
    for(int i=0;i<V;i++)
    if(!vis[i])
    dfs(i,adj,vis);
 
    return 0;
}  