#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n, ele; 
    cin>>n;

    ll maxOccuNum = INT_MIN;
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        cin>>ele;
        mp[ele]++;
        maxOccuNum = max(maxOccuNum, mp[ele]);
    }
    if(mp.size() == 1) cout<<"0"<<endl;
    else {
        // adding initial clone value
        ll count = 1;
        while(maxOccuNum<=n){
            if(maxOccuNum+maxOccuNum>=n){
                count+=abs(maxOccuNum-n);
                break;
            }
            count+=maxOccuNum;
            maxOccuNum=maxOccuNum*2;
            // adding clone value
            count++;
        }
        cout<<count<<endl;
    }
}
int main(){
    ll testCases; cin>>testCases;
    while(testCases--) solve();
    return 0;
}