#include<bits/stdc++.h>
using namespace std;
void solve(){
    int len, ele; cin>>len;
    vector<int> vec;
    unordered_map<int, int> ump;
    for(int i=0; i<len; i++) {
        cin>>ele;
        vec.push_back(ele);
        ump[ele]++;
    }
    int i = 0, totalEle = len, count = 0;
    while(ump.size() != totalEle) {
        count++;
        ump[vec[i]]--;
        if(ump[vec[i]] == 0) ump.erase(vec[i]);
        i++;
        totalEle--;
    }
    cout<<count<<endl;
}
int main(){
    int testCases; cin>>testCases;
    while(testCases--) solve();
    return 0;
}