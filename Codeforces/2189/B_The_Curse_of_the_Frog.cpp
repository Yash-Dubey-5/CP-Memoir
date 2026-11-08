#include<bits/stdc++.h>

using namespace std;

void commence() {
    long long n,x;
    cin >> n >> x;

    vector<long long> a(n),b(n),c(n);
    vector<long long> greed;
    for(int i=0;i<n;i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    long long step,stepRB,target = x;
    for(int i=0;i<n;i++) {
        step = a[i]*(b[i]-1); 
        stepRB = step + a[i] - c[i];
        x = x - step;
        greed.push_back(stepRB);
    }
    if(x <= 0) {
        cout << 0 << endl;
        return;
    }

    auto it = max_element(greed.begin(),greed.end());


    if(*it<=0) {
        cout << -1 << endl;
        return;
    }

    long long numRB = (x+*it-1)/(*it);
    cout << numRB << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}
