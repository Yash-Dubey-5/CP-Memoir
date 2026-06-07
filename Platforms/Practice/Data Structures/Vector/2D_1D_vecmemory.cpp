#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a 3x4 2D vector
    vector<vector<int>> mat(3, vector<int>(4, 0));

    cout << "Addresses in 2D vector<vector<int>>:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Row " << i << " at address of inner vector: " << &mat[i] << "\n";
        cout << "  Elements: ";
        for (int j = 0; j < 4; ++j) {
            cout << &mat[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nAddresses in 1D flattened vector:\n";
    vector<int> flat(3 * 4, 0);
    for (int i = 0; i < 3; ++i) {
        cout << "Row " << i << ": ";
        for (int j = 0; j < 4; ++j) {
            cout << &flat[i * 4 + j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
