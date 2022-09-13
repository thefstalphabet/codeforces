#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll a, b, c, aTime = 0, bTIme = 0;
    cin>>a>>b>>c;
    // when fist ele iis on 1st floor
    if(a==1){
        cout<<"1\n";
        return;
    } else if (c==1){
        aTime = a-1;
        bTIme = abs(b-c);
    } else {
        aTime = a-1;
        bTIme = abs(b-c)+abs(c-1);
    }
    if(aTime<bTIme) cout<<"1\n";
    else if (bTIme<aTime) cout<<"2\n";
    else cout<<"3\n";
}
int main(){
    ll t; cin>>t;
    while(t--) solve();
    return 0;
}