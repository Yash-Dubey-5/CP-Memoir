#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long a,b,p,q,r;
    cin >> a >> b >> p >> q >> r;

    long long m = min(a,b);
    long long min_ = -1; 


    long long candidates[] = {0, 1, 2, m - 2, m - 1, m};

    for (long long k : candidates) {
        if (k >= 0 && k <= m) {
            long long remA = a-k;
            long long remB = b-k;
            
            long long costA = ((remA+1)/2)*p;
            long long costB = ((remB+1)/2)*q;
            
            long long curr = k*r + costA + costB;

            if (min_== -1 || curr < min_) {
                min_ = curr;
            }
        }
    }

    cout << min_ << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}