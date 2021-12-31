#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int len; cin>>len; // array len
    set<int> st;
    int element; // every element of array
    for(int i=0; i<len; i++){
        cin>>element;
        // if the ele not present in the set we insert it
        if(st.find(element)==st.end()){
            st.insert(element);
        } else { // if present we insert its negative value
            st.insert((-1)*element);
        }
    }
    cout<<st.size()<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // number of test cases
    ll testCases; 
    cin>>testCases;
    while(testCases--){
        solve();
    }
    return 0;
}