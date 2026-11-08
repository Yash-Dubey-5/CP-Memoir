#include<iostream>
using namespace std;

int main() {
    int v,e;
    cin >> v >> e;

    cout << "Is it zero based indexing? (1 for yes, 0 for no): ";
    int zeroBased;
    cin >> zeroBased;

    int adj[v+1][v+1] = {0};
    if(zeroBased){
        cout << "Enter the edges (0-based indexing):" << endl;
    } else {
        cout << "Enter the edges (1-based indexing):" << endl;
    }
    for(int i=0;i<e;i++){
        int a,b;
        cin >> a >> b;
        if(zeroBased) {
            if(a < 0 || a >= v || b < 0 || b >= v) {
                cout << "Invalid edge: (" << a << ", " << b << "). Please enter valid edges." << endl;
                i--; // Decrement i to repeat this iteration
                continue;
            }
            adj[a][b] = 1;
            adj[b][a] = 1;
        } else {
            if(a < 1 || a > v || b < 1 || b > v) {
                cout << "Invalid edge: (" << a << ", " << b << "). Please enter valid edges." << endl;
                i--; // Decrement i to repeat this iteration
                continue;
            }
            adj[a-1][b-1] = 1;
            adj[b-1][a-1] = 1;
        }
    }
}