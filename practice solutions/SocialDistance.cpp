#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long n, m;
    cin>>n>>m;
    vector<long long> vec(n);
    long long count = n;
    for(long long i=0; i<n; i++){
       cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    for(long long i=1; i<n; i++){  
        count+=max(vec[i], vec[i-1]);
    }
    count+=max(vec[0], vec[n-1]);
    (count <= m) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main(){
    int testCases; cin>>testCases;
    while (testCases--)
    {
        solve();
    }
    
    return 0;
}