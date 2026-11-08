#include<bits/stdc++.h>
using namespace std;

int N = 1e6;
vector<vector<int>> sieve(N+1);

void Sieve() {
    for(int i=1;i<=N;i++) {
        for(int j=i;j<=N;j+=i) {
            sieve[j].push_back(i);
        }
    }
}

int main() {
    Sieve(); 
    
    int n;
    cout << "Enter a number (up to 1,000,000): ";
    cin >> n;
    
    if(n <= 0 || n > N) {
        cout << "Number out of bounds.\n";
        return 0;
    }

    for(int i = 1; i <= n; i++) {
        cout << "Divisors of " << i << ": ";
        
        // Loop through the specific vector at index 'i'
        for(auto divisor : sieve[i]) {
            cout << divisor << " ";
        }
        cout << "\n";
    }

    return 0;
}