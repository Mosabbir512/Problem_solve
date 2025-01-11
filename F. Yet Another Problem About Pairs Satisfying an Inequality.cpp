#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
const int N=1e9+7;
void solve() {
    int n;
    cin>>n;
    int arr[n+1];
    vector<int>v,v1;
    vector<ll>v2;
    map<int,int>mp;
    for(int i=1; i<=n; i++) {
        cin>>arr[i];
        if(arr[i]<i) {
            v.pb(i);
            mp[arr[i]]++;
        }
    }
    ll s=0;
    if(v.size()<=0){
        cout<<0<<endl;
        return;
    }
    for(auto it:mp) {
        int ind=it.first;
        v1.pb(ind);
        ll val=it.second;
        s+=val;
        v2.pb(s);
    }
    ll ans=0,mx=v2[v2.size()-1];
    v1.pb(N);
    v2.pb(mx);
    for(int i=0; i<v.size(); i++) {
        auto ind=lower_bound(v1.begin(),v1.end(),v[i])-v1.begin();
        ll vl;
        if(v1[ind]==v[i])vl=v2[ind];
        else vl=v2[--ind];
        ans+=(mx-vl);
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


