#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, e;  // n = nodes, e = edges
    cin >> n >> e;

    vector< vector<int> > graph(n);

    for(int i=0; i<e; i++) 
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    return 0;
}
