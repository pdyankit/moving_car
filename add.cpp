#include<bits/stdc++.h>
using namespace std;
int main() {
    string title = "compute the answer";
    map<string,int>mpp;
    int i=0;
    int n = title.size();
    int cnt=0;
    string t;
    while(i < n) {
        if(title[i] == ' ') {
            mpp[t] = cnt;
            t.erase();
            cnt = 0; 
        }
        else {
            t += title[i];
            cnt++;
        }
        i++;
    }
    mpp[t] = cnt;
    string s;
    for(auto it : mpp) {
        if(it.second < 2) {
            s = it.first;
            for(auto i : s) {
                if(i >= 'A' && i <= 'Z') 
                   i = i+32;
            }
            s += ' ';
        }
        else {
            s = it.first;
            if(s[0] >= 'a' && s[0] <= 'z')
                    s[0] = s[0]-32;  
            for(int i=1;i<s.size();i++) {
                    if(s[i] >= 'A' && s[i] <= 'Z')
                       s[i] = s[i]-32;
            }
            s += ' ';
        }
    }
    for(auto i: s) {
        cout << i;
    }
}