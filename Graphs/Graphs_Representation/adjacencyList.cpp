#include <iostream>
using namespace std;

int main()
{
    int vertex, edges;
    cout << "Ether the Vertexes : ";
    cin >> vertex;
    vector<int> adj[vertex];
    cout << "Ether the Edges : ";
    cin >> edges;
    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}