#include<bits/stdc++.h>
using namespace std;

void create(int n,string temp, vector<string> &ans) {
    if(n<=0) {
        ans.push_back(temp);
        return;
    }
    create(n-1,temp+'0',ans);
    create(n-1,temp+'1',ans);
}

int main() {
    int n;
    cin >> n;
    string inp,ds,str;
    cin >> inp;
    for(int i=0;i<n;i++) {
        if(i==0 || inp[i]!=inp[i-1]) {
            str.push_back(inp[i]);
        }
    }
    vector<string> ans,final_ans;
    create(n,ds,ans);
    string temp;
    for(string s:ans) {
        temp ="";
        for(int i=0;i<s.size();i++) {
            if(i==0 || s[i]!=s[i-1]) {
                temp.push_back(s[i]);
            }
        }
        final_ans.push_back(temp);
    }
    int count = 0;
    for(string s:final_ans) {
        if(s.size() < str.size()) {
            count++;
        }
        else if(s.size() == str.size()) {
            if(s==str) {
                count++;
            }
        }
        cout << s << "\n";
    }
    cout << count << "\n";
}