
#include<bits/stdc++.h>
using namespace std;
void addEdge(int u,int v,vector<int>adj[]){
adj[u].push_back(v);
adj[v].push_back(u);
}
void shortestdistance(vector<int>adj[],vector<int>&vis,int src,vector<int>&dist){
queue<int>q;
dist[src]=0;
q.push(src);
while(!q.empty()){
    int node=q.front();
    q.pop();
    for(auto it:adj[node]){
        if(dist[node]+1<dist[it]){
            dist[it]=dist[node]+1;
            q.push(it);
        }
    }
}
for(int i=0;i<dist.size();i++)cout<<dist[i]<<" ";
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
 shortestdistance(adj,vis,0,dist);
    return 0;
}  