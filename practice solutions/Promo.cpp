// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int len, queries;
//     cin>>len>>queries;
//     vector<int> vc(len);
//     for(int i=0; i<len; i++){
//         cin>>vc[i];
//     } sort(vc.begin(), vc.end());
//     while(queries--){
//         int x, y, sum = 0;
//         cin>>x>>y;
//         for(int i = abs(x-len); i<len; i++){
//             if(y==0) break;
//             sum+=vc[i];
//             y--;
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long len, queries;
    cin>>len>>queries;
    vector<long long> vc(len), preSum(len+1);
    for(long long i=0; i<len; i++) cin>>vc[i];
    sort(vc.begin(), vc.end(), greater<int>());
    for(long long i=1; i<=len; i++){
        preSum[i] = vc[i-1]+preSum[i-1];
    }
    int x, y;
    while(queries--) {
        cin>>x>>y;
        cout<<preSum[x]-preSum[x-y]<<endl;
    }
    return 0;
}