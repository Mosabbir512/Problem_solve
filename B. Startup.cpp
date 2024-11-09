#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,k,ans=0;cin>>n>>k;
     map<int,int>mp;
     for(int i=0;i<k;i++){
        int a,b;cin>>a>>b;
        mp[a]+=b;
     }
     vector<int>v;
     for(auto it:mp)v.pb(it.second);
     srt(v);
     reverse(v.begin(),v.end());
     //print(v);
     int i=0;
     while(n--){
        if(i<v.size()){
            ans+=v[i];
            i++;
        }
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


