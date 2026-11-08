#include<bits/stdc++.h> 

using namespace std;

long long fibonacci(long long n,vector<long long> &dp) {
    if(dp[n] != -1) {
        return dp[n];
    }
    if(n <= 1) {
        return n;
    }

    return fibonacci(n-1,dp) + fibonacci(n-2,dp);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    vector<long long> dp(n+1,-1);
    cout << "Fibonacci of " << n << " is : " << fibonacci(n,dp);
}