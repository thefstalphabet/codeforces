#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char convert(int i)
{
    return (i-1%26) + 'a';
}
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    for(int i = n-1; i>=0;){
        if(s[i]-'0'== 0){
            string temp = "";
            temp+=s[i-2];
            temp+=s[i-1];
            ans+=convert(stoi(temp));
            i-=3;
            continue;
        }
        ans+=convert(s[i]-'0');
        i--;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
}
int main(){
    ll t; cin>>t;
    while(t--) solve();
    return 0;
}