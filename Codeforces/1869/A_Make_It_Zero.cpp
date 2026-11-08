#include<bits/stdc++.h>
using namespace std;

void commence() {
    int n;
    cin >> n;
    
    // IMPORTANT: You must read the array elements even if 
    // your construction doesn't depend on their specific values.
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(n % 2 == 0) {
        // Even Case: 2 operations on the full range
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    } else {
        // Odd Case: 4 operations total
        cout << 4 << endl;
        // Step 1: Zero out 1 to n-1 (even length)
        cout << 1 << " " << n - 1 << endl;
        cout << 1 << " " << n - 1 << endl;
        // Step 2: Zero out n-1 to n (length 2, also even)
        cout << n - 1 << " " << n << endl;
        cout << n - 1 << " " << n << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
    return 0;
}