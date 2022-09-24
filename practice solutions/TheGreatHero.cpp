#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll hPower, hHealth, numOfMonsters;
    cin>>hPower>>hHealth>>numOfMonsters;

    vector<pair<ll, ll>> monsters(numOfMonsters);
    for(ll i=0; i<numOfMonsters; i++){
        cin>>monsters[i].first;
    }
    for(ll i=0; i<numOfMonsters; i++){
        cin>>monsters[i].second;
    }
    sort(monsters.begin(), monsters.end());

    for(int i=0; i<numOfMonsters; i++){
        //base condition
        if(hHealth <= 0) {
            cout<<"NO\n";
            return;
        }
        ll temp1 = monsters[i].second/hPower;
        ll temp2 = hHealth/monsters[i].first;
        if(hHealth%monsters[i].first) temp2++;
        if(monsters[i].second%hPower) temp1++;
        temp1 = min(temp1, temp2);

        hHealth -= temp1 * monsters[i].first;
        monsters[i].second -= temp1 * hPower;
    }
    if(monsters[numOfMonsters-1].second > 0) cout<<"NO\n";
    else cout<<"YES\n";

}
int main(){
    int testCases; cin>>testCases;
    while(testCases--) solve();
}