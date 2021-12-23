
#include<bits/stdc++.h>
using namespace std;
void addEdge(int u,int v,vector<int>adj[]){
adj[u].push_back(v);
adj[v].push_back(u);
}
bool checkbipartite(int i,vector<int>adj[],vector<int>&vis,vector<int>&color,int V){
queue<pair<int,int>>q;
color[i]=0;
q.push({i,color[i]});
vis[i]=1;
while(!q.empty()){
    int node=q.front().first;
    int prevcolor=q.front().second;
    q.pop();
    for(auto it:adj[node]){
        if(!vis[i]){
        q.push({it,!prevcolor});
        color[it]=!prevcolor;
        vis[it]=1;
        }
    }
}
bool k=false;
int l=color[0];
 for(int i=1;i<V;i++){
if(l==color[i]){
    return false;
}
l=color[i];
 }
 return true;
}
int main()
{
    // Create a graph given in the above diagram
    int V=4;
    vector<int>adj[V];
    vector<int>vis(V+1,0);
    vector<int>color(V+1.-1);
    addEdge(0, 1,adj);
    addEdge(0, 2,adj);
    addEdge(1, 2,adj);
    addEdge(2, 0,adj);
    addEdge(2, 3,adj);
    addEdge(3, 3,adj);
    for(int i=0;i<V;i++)
    if(!vis[i])
   // if(checkbipartite())
 
    return 0;
}  