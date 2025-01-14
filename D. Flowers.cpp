#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
const int N=1e5+7;
const int m=1e9+7;
ll sum(ll a,ll b) {
    return (a+b)%m;
}
ll sub(ll a,ll b) {
    return ((a-b)%m + m)%m;
}
void solve() {
    ll t,k;
    cin >> t >> k;
    vector<ll>dp(N,0),pre(N,0);
   // cout<<"dp= "<<dp.size()<<endl;
    for(int i=1; i<k; i++)dp[i]=1;
    dp[k]=2;
    for(int i=k+1; i<N; i++)dp[i]=sum(dp[i-1],dp[i-k]);
    //for(int i=1; i<100; i++)cout<<dp[i]<<" ";
    //cout<<endl;
    //cout<<"dp= "<<dp.size()<<endl;
    for(int i=1; i<N; i++) {
        pre[i]=sum(pre[i-1],dp[i]);
    }
    //for(int i=0; i<100; i++)cout<<pre[i]<<" ";
   // cout<<endl;

   // cout<<"pre j="<<pre.size()<<endl;


    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ans=sub(pre[b],pre[a-1]);
        cout<<ans<<endl;
    }
}
int main() {
    fast;
    //int t=1;
    //cin>>t;

    solve();

    return 0;
}


