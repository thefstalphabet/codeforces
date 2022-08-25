#include<bits/stdc++.h>
using namespace std;
void solve(){
    int len, element; cin>>len;
    vector<int> vec;
    map<int, int> ump;
    for(int i=0; i<len; i++){
        cin>>element;
        ump[element]++;
    }
    for(auto pr: ump){
        if(pr.second==1) vec.push_back(pr.first);
        else vec.push_back(pr.first);
    }
    for(auto pr: ump){
        if(pr.second>1){
            while(pr.second > 1){
                vec.push_back(pr.first);
                pr.second--;
            }
        }
    }
    for(auto ele: vec){
        cout<<ele<<" ";
    } cout<<"\n";
}
int main(){
    int testCases; cin>>testCases;
    while(testCases--) solve();
    return 0;
}