#include<bits/stdc++.h>
using namespace std;
void addEdge(int u,int v,vector<int>adj[]){
adj[u].push_back(v);
adj[v].push_back(u);
}
bool bfs(int i,vector<int>adj[],vector<int>&vis){
    bool k=false;
queue<pair<int,int>>q;
q.push({i,-1});
vis[i]=1;
while(!q.empty()){
int node=q.front().first;
int prev=q.front().second;
q.pop();
int ik=0;
for(auto it:adj[node]){
    if(!vis[it]){
        q.push({it,node});
        vis[it]=1;
    }
    else if (it!=prev){
        return true;
    }
    ik++;
}
}
return false;
}
int main()
{
    // Create a graph given in the above diagram
    int V=11;
    vector<int>adj[V+1];
    vector<int>vis(V+1,0);
    addEdge(1, 2,adj);
    addEdge(2, 4,adj);
    addEdge(3, 5,adj);
    addEdge(5, 10,adj);
    addEdge(5, 6,adj);
    addEdge(6, 7,adj);
    addEdge(7, 8,adj);
    addEdge(8, 9,adj);
    addEdge(9, 10,adj);
    addEdge(11, 8,adj);
    bool l;
    for(int i=0;i<V;i++){
    if(!vis[i])
    l=bfs(i,adj,vis);
    if(l)break;
    }
 if(l)cout<<"Cycle is present";
 else cout<<"Cycle is not present";
    return 0;
}  