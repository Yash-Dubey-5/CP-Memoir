#include<iostream>
#include<vector>
#include<set>

using namespace std;

void printMap(vector<set<int>> &a,int v) {
    for(int i=1;i<=v;i++) {
        cout << i << "->";
        for(auto j:a[i]) {
            cout << j << " ";
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

    vector<set<int>> adjacency_List(n+1);
    int u, v;
    cout << "Enter edges (u v):\n";

    for(int i = 0; i < m; i++) {
        cin >> u >> v;

        if(u > n || v > n || u < 1 || v < 1) {
            cout << "Invalid Entry\n";
            continue;
        }
        adjacency_List[u].insert(v);

        if(!directed) {
            adjacency_List[v].insert(u);
        }
    }
    printMap(adjacency_List,n);
}