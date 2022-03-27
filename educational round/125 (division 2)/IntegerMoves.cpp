#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPerfectSquare(ll x) {
    if(x >= 0) {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
void solve(){
    int x, y;
    cin>>x>>y;

    if (x==0 && y==0) cout<<"0"<<endl;
    else {
        int temp = x*x+y*y;
        if(isPerfectSquare(temp)) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
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