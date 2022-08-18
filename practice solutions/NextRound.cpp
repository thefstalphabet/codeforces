#include<bits/stdc++.h>

using namespace std;

int main() {
    // n is for total number of contestant
    // k is for the k index contestant
    int n, k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        int val; cin>>val;
        vec[i] = val;
    }

    int count = 0;
    for(auto ele: vec) {
        if (ele >= vec[k-1] && ele) {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}