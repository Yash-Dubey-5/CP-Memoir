#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a,b,c,m;
        cin >> a >> b >> c >> m;

        long long na = m/a;
        long long nb = m/b;
        long long nc = m/c;

        long long onlya = na*6 - 3*(m/(lcm(a,b))) - 3*(m/lcm(a,c)) + 6*(m/lcm(a,lcm(b,c))) - 4*(m/lcm(a,lcm(b,c))); 
        long long onlyb = nb*6 - 3*(m/(lcm(b,a))) - 3*(m/lcm(b,c)) + 6*(m/lcm(a,lcm(b,c))) - 4*(m/lcm(a,lcm(b,c)));
        long long onlyc = nc*6 - 3*(m/(lcm(a,c))) - 3*(m/lcm(b,c)) + 6*(m/lcm(a,lcm(b,c))) - 4*(m/lcm(a,lcm(b,c))); 
        
        cout << onlya << " " << onlyb << " " << onlyc << endl;
    }
}