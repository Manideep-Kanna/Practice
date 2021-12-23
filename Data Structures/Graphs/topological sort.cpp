
#include<bits/stdc++.h>
using namespace std;
void dfs(int i,vector<int>adj[],vector<int>&vis,stack<int>&s){
vis[i]=1;
for(auto it:adj[i]){
    if(!vis[it]){
        dfs(it,adj,vis,s);
    }
}
s.push(i);
}
void addEdge(int u,int v,vector<int>adj[]){
adj[u].push_back(v);
}
int main()
{
    // Create a graph given in the above diagram
    stack<int>s;
    int V=6;
    vector<int>adj[V];
    vector<int>vis(V,0);
    addEdge(5, 0,adj);
    addEdge(4, 0,adj);
    addEdge(5, 2,adj);
    addEdge(2, 3,adj);
    addEdge(3, 1,adj);
    addEdge(4, 1,adj);
    for(int i=0;i<V;i++){
        if(!vis[i])
        dfs(i,adj,vis,s);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}  