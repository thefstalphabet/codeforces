#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCases; cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        vector<int> vec(n), ans(n);
        for(int i=0; i<n; i++){
            cin>>vec[i];
            ans[i] = vec[i];
        }
        if(n==1){
            cout<<"-1"<<endl;
        } else {
            sort(ans.begin(), ans.end());
            for(int i=0; i<n; i++){
                if (i == n-1 && vec[i]==ans[i]){
                    swap(ans[n-2], ans[n-1]);
                }
                else if (vec[i]==ans[i]){
                    swap(ans[i], ans[i+1]);
                }
            }
            for(auto ele: ans){
                cout<<ele<<" ";
            } cout<<endl;
        }
    }
} 