#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, cnt=0;
    cin>>t;
    while(t--){
        ll petya, vasya, tonya;
        cin>>petya>>vasya>>tonya;
        if(petya+vasya+tonya>=2) cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}