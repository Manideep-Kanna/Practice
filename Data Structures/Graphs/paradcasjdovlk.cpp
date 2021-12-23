#include <bits/stdc++.h>
using namespace std;
void add_edge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void shortesDistance(int s,vector<int>adj[],vector<bool>&vis,vector<int>&dist){
queue<int>q;
dist[s]=0;
q.push(s);
while(!q.empty()){
    int node=q.front();
    q.pop();
    for(auto it:adj[node]){
            if(dist[it]>dist[node]+1){
            dist[it]=dist[node]+1;
            q.push(it);
            }
    }
}
}
int main() {
int v;
cin>>v;
vector<int>adj[v];
  add_edge(adj, 0, 1);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 4);
    add_edge(adj, 3, 7);
    add_edge(adj, 4, 5);
    add_edge(adj, 4, 6);
    add_edge(adj, 4, 7);
    add_edge(adj, 5, 6);
    add_edge(adj, 6, 7);
vector<bool>vis(v,0);
vector<int>dist(v,INT_MAX-1);
shortesDistance(0,adj,vis,dist);
for(int i=0;i<dist.size();i++){
    cout<<dist[i]<<" ";
}
}