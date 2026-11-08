#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;

    int count_a = 0, count_b = 0;
    for(int i=0;i<n;i++){
        if(a[i] == 'a') 
            count_a++;
        else 
            count_b++;
        if(b[i] == 'a')
            count_a++;
        else 
            count_b++;
    }
    if(count_a == count_b) 
        cout << "YES\n";
    else 
        cout << "NO\n";
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}