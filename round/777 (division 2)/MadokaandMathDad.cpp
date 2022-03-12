#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n; cin>>n;

    if(n%3==0 || n%3==2){
        int i = 2;
        while(n>0){
            cout<<i;
            n = n-i;
            i = 3-i;
        }
    } else {
        int i = 1;
        while(n>0){
            cout<<i;
            n = n-i;
            i = 3-i;
        }
    } cout<<endl;
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