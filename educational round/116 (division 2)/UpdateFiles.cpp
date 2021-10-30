#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    /*
    - n is the number of computer
    - k is he number of cable
    */
   ll n,k;
   cin>>n>>k;
   ll computerWithFiles = 1;
   ll totalHours = 0;
   while(computerWithFiles<=k && computerWithFiles<n){
       computerWithFiles*=2;
       totalHours++;
   }
   if(computerWithFiles<n){
       totalHours+=(n-computerWithFiles+k-1)/k;
   }
   cout<<totalHours<<"\n";
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