#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,m;cin>>n>>m;
     vector<int>g[n];
     int arr[n+1];
     for(int i=1;i<=n;i++)cin>>arr[i];
     int ans=0;
     for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        int mn=min(arr[a],arr[b]);
        ans+=mn;
     }cout<<ans<<endl;
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
    return 0;
}


