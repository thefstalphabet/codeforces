#include<bits/stdc++.h>
using namespace std;
void solve(){
    int len; cin>>len;
    vector<int> taskStartTime(len), tasksExeTime(len), durations;
    for(int idx=0; idx<len; idx++) {
        cin>>taskStartTime[idx];
    }
    for(int idx=0; idx<len; idx++) {
        cin>>tasksExeTime[idx];
    }
    for(int idx=0; idx<len; idx++) {
        durations.push_back(abs(taskStartTime[idx]-tasksExeTime[idx]));
        if(idx == len-1) break;
        else if (taskStartTime[idx+1]<tasksExeTime[idx]) {
            taskStartTime[idx+1] = tasksExeTime[idx];
        }
    }
    for(auto ele: durations){
        cout<<ele<<" ";
    } cout<<endl;
}
int main(){
    int testCases; cin>>testCases;
    while(testCases--) solve();
    return 0;
}