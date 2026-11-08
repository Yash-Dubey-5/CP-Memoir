#include<bits/stdc++.h>
using namespace std;

long long fibonacci(long long n) {
    if(n <= 1) {
        return n;
    }
    long long prev = 0;
    long long curr = 1;
    for(int i=2;i<=n;i++) {
        curr = curr + prev;
        prev = curr - prev;
    }    
    return curr;
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Fibonacci of " << n << " is : " << fibonacci(n);
}