#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n;
    cin>>n;
    int gc=1+1;
    int ans=1;
    if(n==2) {
        cout<<1<<endl;
        return;
    }
    for(int i=1; i<n; i++) {
        int tm=gc;
        gc=max(gc,__gcd(i,n)+i);
        if(gc>tm)ans=i;

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


