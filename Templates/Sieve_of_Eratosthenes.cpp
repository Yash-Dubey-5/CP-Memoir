#include <bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define f(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define sz(x) (int)(x).size()
const ll INF = 1e18;
const int MOD = 1e9 + 7;

vector<ll> global_primes;

void sieve() {
    // Standard Sieve of Eratosthenes O(N log log N)
    vector<bool> is_prime(100001, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= 100000; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= 100000; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p <= 100000; p++) {
        if (is_prime[p]) global_primes.push_back(p);
    }
}

void commence() {
    ll d;
    cin >> d;
    // Use lower_bound for O(log N) search
    ll p = *lower_bound(all(global_primes), 1 + d);
    ll q = *lower_bound(all(global_primes), p + d);
    cout << p * q << "\n";
}

int32_t main() {
    sieve(); // CALL ONCE HERE
    int t; cin >> t;
    while(t--) commence();
}