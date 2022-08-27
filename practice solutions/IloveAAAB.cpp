#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    bool flag = false;
    int aCount = 0, bCount = 0;
    for(auto ch: s){
        if(ch=='A') aCount++;
        else bCount++;
        if(bCount>aCount) {
            flag = true;
            break;
        }
    }
    if(flag || s[s.size()-1]!='B') cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    int testCases; cin>>testCases;
    while(testCases--) solve();
    return 0;
}