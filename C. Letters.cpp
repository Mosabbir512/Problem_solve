#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     ll n,m;cin>>n>>m;
     vector<ll>temp(n+1);
     temp[0]=0;
     for(int i=1;i<=n;i++){
        cin>>temp[i];
        temp[i]+=temp[i-1];
     }
     while(m--){
        ll tm;
        cin>>tm;
        int ind=(lower_bound(temp.begin(),temp.end(),tm)-temp.begin());
        cout<<ind<<" "<<tm-temp[ind-1]<<endl;
     }
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


