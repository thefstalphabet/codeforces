#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string keyboard, word;
    cin>>keyboard>>word;
    unordered_map<char, int> ump;
    for(int i=0; i<keyboard.size(); i++){
        ump[keyboard[i]] = i;
    }
    ll sum = 0;
    for(int i=0; i<word.size()-1; i++){
        int j = i+1;
        sum+=abs(ump[word[i]]-ump[word[j]]);
    }
    cout<<sum<<"\n";
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