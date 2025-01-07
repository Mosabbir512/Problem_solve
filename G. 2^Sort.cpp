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
     int arr[n],brr[n];
     for(int i=0;i<n;i++)brr[i]=0;
     for(int i=0;i<n;i++)cin>>arr[i];
     for(int i=1;i<n;i++){
        int tm=arr[i-1]/2;
        if(arr[i]>tm)brr[i]=1;
        brr[i]+=brr[i-1];
     }
     int ans=0,ct=0;
     //print(brr);
     for(int i=0;i<n-k;i++){
        int tm=brr[i+k]-brr[i];
        if(tm==k)ans++;
     }cout<<ans<<endl;
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


