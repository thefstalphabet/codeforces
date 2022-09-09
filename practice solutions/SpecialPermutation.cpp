#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, a, b;
    cin>>n>>a>>b;
    vector<int> vec(n+1);
    for(int i=1; i<=n; i++){
        vec[i] = i;
    }
    if((a>n/2+1) || b<n/2){
		cout<<"-1"<<endl;
	}
	else if((a<=n/2 && b<=n/2) || (a>n/2 && b>n/2)){
		cout<<"-1"<<endl;
    }
    else{
        int left = 1, right = n;
        while(left<right){
            if(vec[left]==a){
                left++;
                continue;
            }
            if(vec[right]==b){
                right--;
                continue;
            }
            swap(vec[left], vec[right]);
            left++; right--;
        }
        for(int i=1; i<=n; i++){
            cout<<vec[i]<<" ";
        } cout<<endl;
    }
}
int main(){
    ll testCases; cin>>testCases;
    while(testCases--) solve();
    return 0;
}