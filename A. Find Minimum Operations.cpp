#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
void solve() {
    ll n,k,ans=0;
    cin>>n>>k;
    if(k==1){
        cout<<n<<endl;
        return;
    }
    while(n) {
        ans+=(n%k);
        n/=k;
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
