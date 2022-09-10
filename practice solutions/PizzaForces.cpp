#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;

    ll x = n/6;
    if(n<=6){
        cout<<15<<endl;
    } else if(n%6==0){
        cout<<x*15<<endl;
    } else if (n%6<=2){
        cout<<(x*15)+5<<endl;
    } else if (n%6<=4){
        cout<<(x*15)+10<<endl;
    } else {
        x++;
        cout<<x*15<<endl;
    }
}
int main(){
    ll testCases; cin>>testCases;
    while(testCases--) solve();
    return 0;
}