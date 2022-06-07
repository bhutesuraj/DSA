#include<iostream>
#include<vector>
using namespace std;
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}
 

int main(){
    int n,m;
    cin>> n >> m;
    int V=5;

    // declare adjacency matrix
    int adj[n+1][n+1];

    // take edge as an input
    for(int i=0;i<m;i++){
        int u,v;
        cin>> u >> v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    printGraph(adj, V);

    return 0;

}