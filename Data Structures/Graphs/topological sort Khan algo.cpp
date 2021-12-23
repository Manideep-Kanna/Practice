
#include<bits/stdc++.h>
using namespace std;
void bfs(int i,vector<int>adj[],vector<int>&vis,stack<int>&s){
// queue<int>q;
// q.push()
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
    vector<int>innode(V,0);
    for(int i=0;i<V;i++){

    }
    for(int i=0;i<V;i++){
        if(!vis[i])
        bfs(i,adj,vis,s);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}  