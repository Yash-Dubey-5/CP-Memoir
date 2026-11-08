// Nicholas and Permutation
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int temp,posi,posn;
    for(int i=1;i<=n;i++) {
        cin >> temp;
        if(temp == 1) {
            posi = i;
        } 
        if(temp == n) {
            posn = i;
        }
    }
    
    cout << max({posi-1,n-posi,posn-1,n-posn}) << endl;
}