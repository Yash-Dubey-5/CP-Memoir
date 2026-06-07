#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n,a,b;
    cin >> n >> a >> b; 

    //a_max is just change 2 numbers at last of the permutation so you get n-2 same prefixes
    //No need for a_min since it is 0.

    //b_max is same as a_max just change the front 2 and you get n-2 same suffixes.
    //b_min is also 0.

    //but there is one major condition for any permutation a + b <= n-2
    
    if(a + b <= n-2 || n == 1){
        cout << "Yes" << endl;
    } else if (a==n && b==n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return;   
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}