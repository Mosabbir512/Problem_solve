#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,k;cin>>n>>k;
     vector<string>s(n);
     for(int i=0;i<n;i++)cin>>s[i];
     for(int i=0;i<n;i+=k){
        for(int j=0;j<s[i].size();j+=k){
            cout<<s[i][j];
        }cout<<endl;
     }

}
int main(){
    fast;
    int t=1;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}


