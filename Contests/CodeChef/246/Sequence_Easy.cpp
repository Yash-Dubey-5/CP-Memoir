#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;
const int MAXN = 2005;

long long fact[MAXN];
long long invFact[MAXN];

// 1. Modular Exponentiation (Used for division under modulo)
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// 2. Modular Inverse
long long modInverse(long long n) {
    return power(n, MOD - 2);
}

// 3. Precompute Factorials and Inverse Factorials in O(N)
void precompute() {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    
    // Fermat's Little Theorem for the largest inverse
    invFact[MAXN - 1] = modInverse(fact[MAXN - 1]);
    
    // Work backwards to find the rest in O(1) each
    for (int i = MAXN - 2; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

// 4. Combinations function nCr % MOD
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

void solve() {
    int N, K;
    cin >> N >> K;

    long long total_sum = 0;

    // 5. Apply the Greater-Than Identity trick: sum( P(f > i) )
    for (int i = 0; i < N; i++) {
        long long C_i = 0;
        
        // 6. Calculate C(i) using the Generating Function formula
        // j loops up to floor(i / K)
        for (int j = 0; j <= i / K; j++) {
            
            // Calculate: binom(N - i + 1, j) * binom(N - j*K, N - i)
            long long term = (nCr(N - i + 1, j) * nCr(N - j * K, N - i)) % MOD;
            
            // Inclusion-Exclusion Principle (Alternating signs)
            if (j % 2 == 1) {
                C_i = (C_i - term + MOD) % MOD; // Subtract if j is odd
            } else {
                C_i = (C_i + term) % MOD;       // Add if j is even
            }
        }

        // 7. Multiply by i! and (N-i)! to get total valid permutations
        long long perms_greater_than_i = (C_i * fact[i]) % MOD;
        perms_greater_than_i = (perms_greater_than_i * fact[N - i]) % MOD;

        // 8. Add to expected value total
        total_sum = (total_sum + perms_greater_than_i) % MOD;
    }

    cout << total_sum << "\n";
}

int main() {
    // Fast I/O for Competitive Programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Precompute factorials once before processing test cases
    precompute();
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}