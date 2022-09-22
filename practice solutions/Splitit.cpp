#include<bits/stdc++.h>
using namespace std;
void solve(){
    // inputs
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;

    // logic
    if(2*k>=n) cout<<"NO\n";
    else {
        for(int i=0; i<k; i++){
            if(s[i] != s[n-1-i]){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
    }
}
int main(){
    int testCases; cin>>testCases;
    while(testCases--) solve();
}