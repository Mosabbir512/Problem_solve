#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     ll l,r;cin>>l>>r;
     ll n=r-l;
     ll low=0,high=r;
     while(high-low>1){
        ll mid=(high+low)/2;
        ll ans=(mid*(mid+1))/2;
        if(ans<=n)low=mid;
        else high=mid;
     }
     ll ans=(high*(high+1))/2;
     if(ans<=n)cout<<high+1<<endl;
     else cout<<low+1<<endl;
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


