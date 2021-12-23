
#include<bits/stdc++.h>
using namespace std;
void addEdge(int u,int v,vector<int>adj[]){
adj[u].push_back(v);
adj[v].push_back(u);
}
void bfs(int i,vector<int>adj[],vector<int>&vis){
    queue<int>q;
    q.push(i);
    vis[i]=1;
while(!q.empty()){
    int node=q.front();
    q.pop();
    cout<<node<<" ";
    for(auto it:adj[node]){
        if(!vis[it]){
        q.push(it);
        vis[it]=1;
        }
    }
}
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
    bfs(i,adj,vis);
 
    return 0;
}  