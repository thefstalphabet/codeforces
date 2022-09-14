#include<bits/stdc++.h>
using namespace std;
void solve(){
    int len; cin>>len;
    vector<int> vc(len+1);
    bool flag = true;
    for(int i=1; i<=len; i++){
        cin>>vc[i];
        if(vc[i]!=i){
            flag = false;
        }
    }
    // when already sorted
    if(flag) cout<<0<<endl;
    else if(vc[1]==1 || vc[len]==len){
        cout<<1<<endl;
    } else if (vc[1]==len && vc[len]==1){
        cout<<3<<endl;
    } else {
        cout<<2<<endl;
    }

}
int main(){
    int testCase; cin>>testCase;
    while(testCase--) solve();
} 