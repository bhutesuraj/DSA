#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> bfs_traversal;
    vector<bool> vis(V, false);
    for (int i = 0; i < V; ++i) {
        if (!vis[i]) {
            queue<int> q;
            vis[i] = true;
            q.push(i);
            while (!q.empty()) {
                int g_node = q.front();
                q.pop();
                bfs_traversal.push_back(g_node);
                for (auto it : adj[g_node]) {
                    if (!vis[it]) {
                        vis[it] = true;
                        q.push(it);
                    }
                }
            }
        }
    }
    return bfs_traversal;
}
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int V=4;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3);
    vector<int> bfs_traversal = bfsOfGraph(V, adj);
    for (auto it : bfs_traversal)
        cout << it << " ";
    return 0;
}
