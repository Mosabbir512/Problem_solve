#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,k;cin>>n>>k;
     int arr[n];
     map<int,int>mp;
     for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
     }
     int ans=0;
     //for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
     for(int i=1;i<=k/2;i++){
        int a=i,b=k-i;
        int tma=0,tmb=0;
        if(mp.find(a)!=mp.end())tma=mp[a];
        if(mp.find(b)!=mp.end())tmb=mp[b];
        if(a==b)ans+=(tma/2);
        else
        ans+=min(tma,tmb);
     }
     cout<<ans<<endl;
}
int main(){
    fast;
    int t=1;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}


