#include<bits/stdc++.h>
using namespace std;
void solve(){
    int len, total_balloons = 0; 
    cin>>len;
    string contests;
    cin>>contests;
    set<char> se;
    for(int idx=0; idx<len; idx++){
        auto it = se.find(contests[idx]);
        if(it == se.end()){
            se.insert(contests[idx]);
            total_balloons+=2;
        } else {
            total_balloons++;
        }
    }
    cout<<total_balloons<<endl;
}
int main(){
    int testCases; cin>>testCases;
    while(testCases--) solve();
    return 0;
}