
#include<bits/stdc++.h>
using namespace std;
bool dfs(int i,vector<int>adj[],vector<int>&vis,int prev){
    vis[i]=1;
    bool l;
    for(auto it:adj[i]){
        if(!vis[it]){
            if(dfs(it,adj,vis,i))return true;
        }
        else if(it!=prev)
        return true;
    }
    return false;
}
void addEdge(int u,int v,vector<int>adj[]){
adj[u].push_back(v);
adj[v].push_back(u);
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
    for(int i=1;i<V;i++)
    if(!vis[i]){
    l=dfs(i,adj,vis,-1);
    if(l)break;
    }
    if(l)cout<<"Cycle is present";
    else cout<<"Cycle is not present";
 
    return 0;
}  