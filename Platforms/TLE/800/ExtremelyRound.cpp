#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n,x = 0;

    cin >> n;

    //kind of like bit counting.
    //if there is bigger bit automatically include the 9 for current bit,decimal(10) system. 
    //include biggest bits number.
    //0-9,10-90,100-900,1000-9000.....

    while(n !=0 ) {
        if( n/10 != 0) {
            x += 9;
        } else {
            x += n%10;
        }
        n = n/10;
    }
    cout << x << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}