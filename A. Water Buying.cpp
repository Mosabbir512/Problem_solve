#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    ll n;
    cin>>n;
    int a,b;cin>>a>>b;
    if(a*2<=b){
        cout<<n*a<<endl;
    }
    else {
        ll ans=(n/2)*b;
        if(n&1)ans+=a;
        cout<<ans<<endl;
    }
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


