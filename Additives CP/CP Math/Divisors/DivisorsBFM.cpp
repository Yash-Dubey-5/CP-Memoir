#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> divisors;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    cout << "Divisors of " << n << " are: ";
    sort(divisors.begin(), divisors.end());
    for (int d : divisors) {
        cout << d << " ";
    }
    cout << endl;

}