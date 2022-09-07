#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n, ele; cin>>n;
    map<ll, ll> mp;
    vector<ll> ans(n+1);
    for(ll i=0; i<n; i++){
        cin>>ele;
        mp[ele]++;
    }
    for(ll i=1; i<=n; i++){
        if(i<=mp.size()) ans[i] = mp.size();
        else ans[i] = i;
    }
    for(ll i=1; i<=n; i++) cout<<ans[i]<<" ";
    cout<<"\n";
}
int main(){
    ll testCases; cin>>testCases;
    while(testCases--) solve();
    return 0;
}