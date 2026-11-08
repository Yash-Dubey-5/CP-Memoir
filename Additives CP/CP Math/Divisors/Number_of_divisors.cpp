#include <bits/stdc++.h>

using namespace std;


long long countDivisors(int n) {

    long long n_divisors = 1;
    int count;
    for(int i = 2; i * i <= n; ++i) {
        count = 0;
        while(n%i == 0) {
            n /= i;
            count++;
        }
        n_divisors *= (count + 1);
    }
    if(n > 1) {
        n_divisors *= 2; 
    }

    return n_divisors;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long n_divisors = countDivisors(n);

    cout << "Number of divisors: " << n_divisors << endl;
    return 0;
}