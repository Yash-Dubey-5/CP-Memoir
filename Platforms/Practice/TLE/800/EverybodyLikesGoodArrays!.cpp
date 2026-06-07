#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n,x;
    
    cin >> n;

    //basically check if two numbers inserted consecutively are of not same parity that is (odd,odd) or (even,even)
    //multiplication part is to confuse because we dont check for (odd,even) or (even,odd) pairs
    //and for (odd*odd) = odd and (even*even) = even

    int op=0;
    bool parity; // false for even true for odd
    vector<int> ga;
    for(int i=0;i<n;i++) {
        cin >> x;
        if(i == 0) {
            ga.push_back(x);
        } else {
            if (x%2 == 0 && parity == false) {
                op++;
            } else if (x%2 !=0 && parity == true) {
                op++;
            }
        }
        if (x%2 == 0) {
            parity = false;
        } else {
            parity = true;
        }
    }
        cout << op << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}