#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
   string s;
   cin>>s;
   if(s.size()<=10){
       cout<<s<<"\n";
   }
   else{
       cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
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