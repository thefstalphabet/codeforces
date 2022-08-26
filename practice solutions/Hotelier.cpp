#include<bits/stdc++.h>
using namespace std;
int main(){
    int len; cin>>len;
    string str; cin>>str;
    vector<int> vec(10);
    for(int i=0; i<=len; i++){
        if(str[i]=='L'){
            for(int j=0; j<=9; j++){
                if(vec[j]==0){
                    vec[j] = 1;
                    break;
                }
            }
        }
        else if(str[i]=='R'){
            for(int j=9; j>=0; j--){
                if(vec[j]==0){
                    vec[j] = 1;
                    break;
                }
            }
        }
        else vec[str[i]-'0'] = 0;
    }
    for(auto ele: vec) cout<<ele;
    cout<<"\n";
    return 0;
}