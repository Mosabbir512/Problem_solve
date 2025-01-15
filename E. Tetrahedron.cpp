#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
const int m=1e9+7;
void solve() {
    ll n;
    cin>>n;
    ll d=0;
    ll s=1,ct=0,s1=0;
    for(int i=2; i<=n; i++) {
        d=s1-d;
        d+=m;  // just for neg
        d%=m;
        s=(s*3);
        s+=m; // just for neg
        s%=m;
        s1=s;
        //cout<<s<<" "<<d<<endl;
    }
    cout<<(s-d+m)%m<<endl;
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


