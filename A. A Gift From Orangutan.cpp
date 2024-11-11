#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,tm;cin>>n;
     int mx=INT_MIN,mn=INT_MAX;
     for(int i=0;i<n;i++){
        cin>>tm;
        mx=max(tm,mx);
        mn=min(tm,mn);
     }
     cout<<(mx-mn)*(n-1)<<endl;
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


