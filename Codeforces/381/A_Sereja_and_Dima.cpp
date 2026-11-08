//Sereja and Dima
#include<bits/stdc++.h>

using namespace std;

void add(int &player,int &l,int &r,int a[]) {
    if(a[l] > a[r]) {
        player += a[l++];
    } else {
        player += a[r--];
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];

    int p=0,q=n-1;
    int Sereja=0,Dima=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    bool turn = 1; // '1' for Sereja and '0' for Dima

    while(p<q+1) {
        if(turn == 1) {
            add(Sereja,p,q,a);
            turn = 0;
        } else {
            add(Dima,p,q,a);
            turn = 1;
        }
    }

    cout << Sereja << " " << Dima << endl;
}