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
     int arr[n+1],brr[n+1];
     brr[0]=0;
     for(int i=1;i<=n;i++)cin>>arr[i];
     for(int i=1;i<=n;i++)cin>>brr[i];
     for(int i=1;i<=n;i++){
        int mx=max(arr[i],brr[i-1]);
        cout<<brr[i]-mx<<" ";
     }cout<<endl;
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


