#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n;cin>>n;
     int ct=0;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
        while(arr[i]%2==0){
            ct++;
            arr[i]/=2;
        }
     }
     sort(arr,arr+n);
     int tm=arr[n-1];
     ll ans=tm;
     while(ct--)ans*=2;
     for(int i=0;i<n-1;i++)ans+=arr[i];
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


