#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    /*
    - a is number of songs that is len of 1 min
    - b is number of songs that is len of 2 min
    - c is number of songs that is len of 3 min
    */
    ll a, b, c;
    cin>>a>>b>>c;
    if((a*1+b*2+c*3)%2==0) cout<<"0"<<"\n";
    else cout<<"1"<<"\n";
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