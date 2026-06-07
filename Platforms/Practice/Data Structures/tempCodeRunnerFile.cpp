#include<iostream>
#include<vector>

using namespace std;

void printMap(vector<vector<int>> &a,int v) {
    for(int i=1;i<=v;i++) {
        for(auto j:a[i]) {
            cout << a[i][j] << endl;
        }
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

    vector<vector<int>> adjacency_List(n+1);
    int u, v;
    cout << "Enter edges (u v):\n";

    for(int i = 0; i < m; i++) {
        cin >> u >> v;

        if(u > n || v > n || u < 1 || v < 1) {
            cout << "Invalid Entry\n";
            continue;
        }
        adjacency_List[u].push_back(v);

        if(!directed) {
            adjacency_List[v].push_back(u);
        }
    }
    printMap(adjacency_List,n);
}