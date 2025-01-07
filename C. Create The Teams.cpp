#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     ll n,k;cin>>n>>k;
     ll arr[n];
     for(int i=0;i<n;i++)cin>>arr[i];
     ll mn=INT_MAX,len=0;int ans=0;
     sort(arr,arr+n);
     reverse(arr,arr+n);
     for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);
        ++len;
        if(mn*len>=k){
            mn=INT_MAX;
            ++ans;len=0;
        }
     }
     cout<<ans<<endl;
}
int main(){
    fast;
    int t=1;
    //cout<<1e9+1e9<<" "<<(1LL<<31)<<endl;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}


