#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,x,y,ans=0;
    cin>>n>>x>>y;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    vector<int>v;
    for(int i=0; i<n; i++) {
        if(arr[i]<=x)v.pb(arr[i]);
    }
    if(x<=y) {
        int k=v.size();
        if(k&1)++ans;
        ans+=k/2;
        cout<<ans<<endl;
    } else if(x>y) {
        cout<<n;
    }

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


