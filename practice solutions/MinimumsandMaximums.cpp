#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCases; cin>>testCases;
    while(testCases--){
        int l1, r1, l2, r2;
        cin>>l1>>r1>>l2>>r2;
        if(l2>=l1 && l2<=r1) cout<<l2<<endl;
        else if (l1>=l2 && l1<=r2) cout<<l1<<endl;
        else cout<<l1+l2<<endl;
    }
} 