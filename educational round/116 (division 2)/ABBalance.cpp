#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s;
    cin>>s;
    s[s.size()-1] = s[0];
    cout<<s<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}