#include<bits/stdc++.h>
using namespace std;
void shortestPath(vector<pair<int,int>>adj[],vector<int>&vis,vector<int>&dist,int src,stack<int>&s){
dist[src]=0;
while(!s.empty()){
    int node=s.top();
    s.pop();
    if(dist[node]!=INT_MAX){
    for(auto it :adj[node]){
        if(dist[node]+it.second<dist[it.first])
        dist[it.first]=dist[node]+it.second;
        }
    }
}
for(int i=0;i<dist.size();i++)if(dist[i]==INT_MAX)cout<<"INF ";
else cout<<dist[i]<<" ";
}
void addEdge(int u,int v,int w,vector<pair<int,int>>adj[]){
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}
void dfs(vector<pair<int,int>>adj[],vector<int>&vis,int i,stack<int>&s){
vis[i]=1;
for(auto it:adj[i]){
    dfs(adj,vis,it.first,s);
}
s.push(i);
}
int main(){
    int V=6;
vector<pair<int,int>>adj[V];
stack<int>s;
vector<int>vis(V,0);
addEdge(1,2,2,adj);
addEdge(1,4,1,adj);
addEdge(2,3,4,adj);
addEdge(2,5,5,adj);
addEdge(3,4,3,adj);
addEdge(5,3,1,adj);
for(int i=0;i<V;i++)
if(!vis[i])
dfs(adj,vis,i,s);

vector<int>dist(V,INT_MAX);
shortestPath(adj,vis,dist,0,s);
}
