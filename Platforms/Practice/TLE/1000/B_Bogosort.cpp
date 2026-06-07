#include<bits/stdc++.h>
 
using namespace std;
 
void commence() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a.rbegin(),a.rend());
 
    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}


/*Since  j-a[j] != i-a[i]
       =>j-i != a[j]-a[i]
       Since, i<j =>j-i>0
       j-i is always greater than 0 
       so we can make a[j]-a[i] always be <= 0,
       which can easily be done by having the array in descending order.
*/