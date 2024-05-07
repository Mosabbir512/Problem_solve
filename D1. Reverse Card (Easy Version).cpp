#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
void solve() {
    ll n,m;
    cin>>n>>m;
    ll ans=n;
    for(ll i=2; i<=m; i++) {
        ll tm=i;
        ans+=((n+tm)/(tm*tm));
    }
    cout<<ans<<endl;
}
int main() {
    fast;
    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


