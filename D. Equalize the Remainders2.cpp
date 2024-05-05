#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    ll n,k;
    ll ans=0;
    cin>>n>>k;
    ll arr[n],brr[k],temp[k];
    for(int i=0; i<n; i++)cin>>arr[i];
    for(int i=0; i<k; i++)brr[i]=0;
    for(int i=0; i<n; i++)brr[arr[i]%k]++;
    ll div=n/k;
    map<ll,ll>mp;
    for(int i=0; i<k; i++) {
        int tm=brr[i];
        if(tm<div)
            mp[i]=div-tm;
    }
    for(int i=0; i<k; i++)temp[i]=0;
    for(int i=0; i<n; i++) {
        bool pos=false;
        ll r=arr[i]%k;
        temp[r]++;
        int ct=temp[r],ind;
        if(ct>div) {
            auto it=mp.lower_bound(r);
            if((*it).second==0) {
                ind=(*mp.begin()).first;
            } else {
                ind=(*it).first;
            }
            if(ind>r) {
                pos=true;
                arr[i]+=ind-r;
                ans+=ind-r;
                mp[ind]--;
                if(mp[ind]==0) {
                    mp.erase(mp.find(ind));
                }
            } else {
                pos=true;
                int ct=k-r;
                ct+=ind;
                arr[i]+=ct;
                ans+=ct;
                mp[ind]--;
                if(mp[ind]==0) {
                    mp.erase(mp.find(ind));
                }
            }
        }

    }
    cout<<ans<<endl;
    print(arr);

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


