#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    // n is the length of array
    ll n;
    cin>>n;
    ll cnt0 = 0, cnt1 = 0;
    for(ll i=1; i<=n; i++){
        ll x;
        cin>>x;
        if(x == 0) cnt0++;
        if(x == 1) cnt1++;
    }
    ll ans = pow(2, cnt0)*cnt1;
    cout <<ans<< '\n';

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