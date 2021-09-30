#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;        // no of vertices
    int e;        // no of edges

    cin >> n >> e;

    vector< vector<int> > graph(n, vector<int>(n, 0));

    for(int i=0; i<e; i++) 
    {
        int u, v;
        cin >> u >> v;
        graph[u][v] = graph[v][u] = 1;
    }

    return 0;
}