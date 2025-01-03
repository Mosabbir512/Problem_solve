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
     int arr[n],brr[n];
     for(int i=0;i<n;i++)cin>>arr[i];
     for(int i=0;i<n;i++)cin>>brr[i];
     vector<ll>dp1(n+1,0),dp2(n+1,0);
     dp1[1]=arr[0];dp2[1]=brr[0];
     for(int i=2;i<=n;i++){
        dp1[i]=max(dp1[i-1],dp2[i-1]+arr[i-1]);
        dp2[i]=max(dp2[i-1],dp1[i-1]+brr[i-1]);
     }
     cout<<max(dp1[n],dp2[n])<<endl;
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

