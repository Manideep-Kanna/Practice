
#include<bits/stdc++.h>
using namespace std;
void addEdge(int u,int v,vector<int>adj[]){
adj[u].push_back(v);
adj[v].push_back(u);
}
int shortestDistance(vector<int>&dist,int s,int d,vector<int>adj[],vector<int>&vis){
queue<int>q;
q.push(s);
vis[s]=1;
dist[s]=0;
while(!q.empty()){
    int node=q.front();
    q.pop();
    for(auto it:adj[node]){
        if(!vis[it]){
        if(dist[node]+1<dist[it])
        dist[it]=dist[node]+1;
        q.push(it);
        }
    }
}
return dist[d];
}
int main()
{
    // Create a graph given in the above diagram
    int V=9;
    vector<int>adj[V+1];
    vector<int>vis(V+1,0);
    vector<int>dist(V,INT_MAX);
    addEdge(0, 1,adj);
    addEdge(0, 3,adj);
    addEdge(1, 3,adj);
    addEdge(1, 2,adj);
    addEdge(2, 6,adj);
    addEdge(3, 4,adj);
    addEdge(4, 5,adj);
    addEdge(5, 6,adj);
    addEdge(6, 7,adj);
    addEdge(6, 8,adj);
    addEdge(7, 8,adj);
 cout<<shortestDistance(dist,0,7,adj,vis);
    return 0;
}  