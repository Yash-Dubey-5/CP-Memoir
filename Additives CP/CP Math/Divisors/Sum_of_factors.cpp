#include<bits/stdc++.h>
using namespace std;

vector<pair<long long,int>> primeFactorization(long long n) {
    vector<pair<long long,int>> primes;
    for(long long i=2;i*i<=n;i++) {
        int count = 0;
        while(n%i == 0) {
            n /= i;
            count ++;
        }
        primes.push_back({i,count});
    }
    if(n>1) {
        primes.push_back({n,1});
    }
    return primes;
}
long long sumOfFactors(long long n) {
    vector<pair<long long,int>> divisors = primeFactorization(n);
    long long sum = 1;
    for(auto it:divisors) {
        sum *= (pow(it.first,it.second+1)-1)/(it.first-1);
    }
    return sum;
}

int main() {
    long long int n;
    cout << "Enter a number:";
    cin >> n;
    cout << sumOfFactors(n) << endl;
}