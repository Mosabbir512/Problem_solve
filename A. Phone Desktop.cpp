#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int x,y;cin>>x>>y;
     int ans=y/2;
     int ache=ans*7;
     if(y&1){
        ++ans;
        ache+=11;
     }
     if(x>ache){
        x-=ache;
        ans+=(x/15);
        if(x%15!=0)ans++;
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


