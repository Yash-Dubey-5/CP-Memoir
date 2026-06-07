#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n;
    cin >> n;

    int temp = n;
    int two = 0,three = 0;
    while(temp%2 == 0) {
        temp = temp/2;
        two++;
    } 
    temp = n;
    while(temp%3 == 0) {
        temp /= 3;
        three++;
    }
    if(two > three) {
        cout << -1 << endl;
    } else if(n/(pow(2,two)*pow(3,three)) != 1) {
        cout << -1 << endl;
    } else {
        cout << 2*three - two << endl; 
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}