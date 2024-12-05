#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve() {
    ll n,ans=0;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        ans=gcd(ans,arr[i]);
    }
    vector<ll>tm;tm.pb(1);
    if(ans!=1)
    tm.pb(ans);
    for(ll i=2; i*i<=ans; i++) {
        if(ans%i==0) {
            tm.pb(i);
            if(i!=ans/i)
                tm.pb(ans/i);
        }
    }
   cout<<tm.size();

}
int main() {
    fast;
    int t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


