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
     ll arr[n+1];
     for(int i=1;i<=n;i++)cin>>arr[i];
     ll ans=0;vector<int>v;
     for(int i=1;i<=n;i++){
        ans+=arr[i];
        if(ans&1){
            v.pb(i);
            ans=0;
        }
     }
     if(v.size()>=k){
        int tm=v.size();
        if(tm%2==k%2){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)cout<<v[i]<<" ";
            cout<<n<<endl;
        }
        else cout<<"NO"<<endl;

     }else{
         cout<<"NO"<<endl;
     }

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

