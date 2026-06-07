#include <bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define f(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define sz(x) (int)(x).size()
const int INF = 1e18;
const int MOD = 1e9 + 7;

#include <bits/stdc++.h>
using namespace std;

vector<ll> primes;
vector<ll> sieve() {
// Vector to store prime numbers
	vector<ll> primes;
	// Generate prime numbers up to 100,000
	for (ll i = 2; i <= 100000; i++) // O(10^5)
	{
		bool is_prime = true;
		// Check if 'i' is a prime number
		for (ll j = 2; j * j <= i; j++) // O(sqrt(10^5)) = O(10^2)
		{
			if (i % j == 0)
			{
				is_prime = false;
				break;
			}
		}
		// If 'i' is prime, add it to the list of primes
		if (is_prime)
			primes.push_back(i);
	}
	// Total complexity for generating primes: O(10^5 * 10^2) = O(10^7)
    return primes;
}

void commence() {
    	ll d;
		cin >> d;
		ll p = -1;
		// Find the smallest prime >= (1 + d)
		for (ll i = 0; i < primes.size(); i++) // O(9000)
		{
			if (primes[i] >= (1 + d))
			{
				p = primes[i];
				break;
			}
		}
		ll q = -1;
		// Find the smallest prime >= (p + d)
		for (ll i = 0; i < primes.size(); i++) // O(9000)
		{
			if (primes[i] >= (p + d))
			{
				q = primes[i];
				break;
			}
		}
		// Calculate the smallest number 'a' with at least 4 divisors
		ll a = min(p*p*p,p*q);
		cout << a << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int t;
    cin >> t;
    primes = sieve();
    while(t--) {
        commence();
    }
    return 0;
}

// Time Complexity (TC): O(10^7) + O(3000 * 9000) = O(10^7) + O(3 * 10^7) = O(10^7)
// Space Complexity (SC): O(10^4)
