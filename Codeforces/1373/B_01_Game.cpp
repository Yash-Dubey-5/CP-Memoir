#include<bits/stdc++.h>

using namespace std;

void commence() {
    string s;
    cin >> s;

    int cnt0 = 0,cnt1 = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i] == '0') {
            cnt0++;
        } else {
            cnt1++;
        }
    }
    int min = (cnt0<cnt1) ? cnt0 : cnt1;

    if(min%2 == 0) {
        cout << "NET" << endl;
    } else {
        cout << "DA" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}