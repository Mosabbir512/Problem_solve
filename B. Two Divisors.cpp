#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
int N=1e9+1;
void solve() {
    int a,b;
    cin>>a>>b;
    int mn=min(a,b),mx=max(a,b);
    int gc=__gcd(a,b);
    mx/=gc,mn/=gc;
    if(mn==1)
        mx=mx*mx;
    else
        mx=mx*mn;
    cout<<mx*gc<<endl;


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


