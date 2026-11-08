#include <bits/stdc++.h>
using namespace std;


vector<long long int> divisorList(long long int n) {
    vector<long long int> divisors;
    for(int i=1;i*i<=n;i++) {
        if(n%i == 0) {
            divisors.push_back(i);
            if(n/i != i) {
                divisors.push_back(n/i);
            }
        }
    }
    return divisors;
}
int main() {
    vector<long long int> divisors;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    divisors = divisorList(n);
    cout << "Divisors of " << n << " are: ";
    sort(divisors.begin(), divisors.end());
    for (int d : divisors) {
        cout << d << " ";
    }
    cout << endl;
    cout << "Number of divisors: " << divisors.size() << endl;

}