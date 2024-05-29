#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,a,ans=0;cin>>n;
     map<int,int>mp;
     for(int i=0;i<n;i++){
        cin>>a;
        mp[a]++;
     }
     for(auto it:mp){
         int tm=it.first;
         mp[tm]=mp[tm]%2;
     }
     vector<int>v;
     for(auto it:mp){
        if(it.second!=0)
        v.pb(it.first);
     }
     for(int i=0;i<v.size();i+=2){
        int tm1=v[i],tm2=v[i+1];
        ans+=tm2-tm1;
     }
     cout<<ans<<endl;
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


