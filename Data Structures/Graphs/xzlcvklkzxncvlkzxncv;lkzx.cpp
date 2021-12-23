#include<bits/stdc++.h>
using namespace std;
void addEdge(int u,int v,int w,vector<pair<int,int>>adj[]){
    adj[u].push_back({v,w});
}
void shortestPath
int main()
{
    int v;
    cin>>v;
    vector<pair<int,int>>adj[v];
    addEdge(0, 1, 5,adj);
    addEdge(0, 2, 3,adj);
    addEdge(1, 3, 6,adj);
    addEdge(1, 2, 2,adj);
    addEdge(2, 4, 4,adj);
    addEdge(2, 5, 2,adj);
    addEdge(2, 3, 7,adj);
    addEdge(3, 4, -1,adj);
    return 0;
}