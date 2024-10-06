#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n;cin>>n;
     int ans=0,ct=0;
     vector<int>v(n);
     for(int i=0;i<n;i++)cin>>v[i];
     for(int i=0;i<n;i++){
        if(i==0 && v[i==1]){
            if(v[n-1]==1){
                for(int i=n-1;i>0;i--){
                    if(v[i]==1)ct++;
                    else break;
                }
            }
        }
        if(v[i]==1)ct++;
        else {
            ans=max(ans,ct);
            ct=0;
        }
     }
     ans=max(ans,ct);
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


