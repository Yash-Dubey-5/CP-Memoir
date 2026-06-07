#include<iostream>
using namespace std;

void printMap(int n, int a[][101]) {
    cout << "Adjacency Matrix:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    bool directed;
    cout << "Enter 1 for Directed and 0 for Undirected graph: ";
    cin >> directed;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    int m;
    cout << "Enter number of edges: ";
    cin >> m;

    int adjacency_Matrix[101][101] = {0}; // initialize with 0

    int u, v;
    cout << "Enter edges (u v):\n";

    for(int i = 0; i < m; i++) {
        cin >> u >> v;

        if(u > n || v > n || u < 1 || v < 1) {
            cout << "Invalid Entry\n";
            continue;
        }

        adjacency_Matrix[u][v] = 1;

        if(!directed) {
            adjacency_Matrix[v][u] = 1;
        }
    }

    printMap(n, adjacency_Matrix);
}