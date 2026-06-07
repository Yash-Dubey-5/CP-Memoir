#include<bits/stdc++.h>

using namespace std;

void commence() {
    long long a,b;
    cin >> a >> b;

    if(a==b) {
        cout << 0 << " " << 0 << endl;
        return;
    }

    long long r = abs(a-b);
    long long abo =(((a+r-1)/r) - (a/r))*r -a%r;
    long long min = (abo < (r-abo)) ? abo : (r-abo);
    cout << r << " " << min << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}