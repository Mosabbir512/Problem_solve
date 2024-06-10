#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    ll n,m;
    cin>>n>>m;
    map<int,int>mp1,mp2;
    int r=n%5;
    for(int i=1; i<=5; i++) {
        if(i<=r && r!=0)
            mp1[i]=((n/5)+1);
        else mp1[i]=(n/5);
    }
    r=m%5;
    for(int i=1; i<=5; i++) {
        if(i<=r && r!=0)
            mp2[i]=((m/5)+1);
        else mp2[i]=(m/5);
    }
    ll ans=0;
    for(int i=1;i<=5;i++){
        int j=5-i;
        if(j==0)j=5;
        //cout<<i<<"="<<mp1[i]<<" "<<j<<"="<<mp2[j]<<endl;
        ans+=(mp1[i]*1ll*mp2[j]);
    }
    cout<<ans<<endl;
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


