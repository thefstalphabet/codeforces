#include<bits/stdc++.h>
using namespace std;
void solve() {
    int len, ele; cin>>len;
    vector<int> vec(len);
    for(int i=0; i<len; i++) {
        cin>>ele;
        vec[i] = ele;
    }
    sort(vec.begin(), vec.end());
    cout<<vec[len-1]+vec[len-2]-vec[0]-vec[1]<<endl;
}
int main() {
    int testCases; cin>>testCases;
    while(testCases--) solve();
    return 0;
}