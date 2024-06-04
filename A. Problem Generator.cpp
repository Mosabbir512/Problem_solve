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
     string s;cin>>s;
     map<char,int>mp;
     mp['A']=0;
     mp['B']=0;
     mp['C']=0;
     mp['D']=0;
     mp['E']=0;
     mp['F']=0;
     mp['G']=0;
     for(int i=0;i<s.size();i++){
        mp[s[i]]++;
     }
     //for(auto it:mp)cout<<it.second<<" ";cout<<endl;
     int ans=0;
     for(auto it:mp){
        int tm=it.second;
        if(tm<m)ans+=(m-tm);
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


