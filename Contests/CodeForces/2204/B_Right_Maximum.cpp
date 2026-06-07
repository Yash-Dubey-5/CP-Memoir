#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n;
    cin >> n;
    
    int cur_max = 0;
    int op = 0;
    
    for (int i=0;i<n;i++) {
        int a;
        cin >> a;
        
        if (a >= cur_max) {
            op++;
            cur_max = a;
        }
    }
    
    cout << op << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            commence();
        }
    }
    
    return 0;
}