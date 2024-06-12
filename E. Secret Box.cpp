#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     ll x,y,z,m;cin>>x>>y>>z>>m;
     ll ans=0;
     for(ll i=1;i<=x;i++){
        for(ll j=1;j<=y;j++){
            ll tm=i*j;
            if(m%tm==0){
                ll k=m/tm;
                if(k<=z){
                    ll tm_ans=(x-i+1)*(y-j+1)*(z-k+1);
                    ans=max(ans,tm_ans);
                }
            }
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


