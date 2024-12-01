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
     int arr[n];
     for(int i=0;i<n;i++)cin>>arr[i];
     if(n==1 || n==2){
        cout<<"YES"<<endl;
        return;
     }
     bool sum=false;
     map<int,int>mp;
     for(int i=0;i<n-1;i++){ // increasing
        int tm=arr[i]-arr[i+1];
        mp[tm]++;
     }
     if(mp.size()==1)sum=true;
     if(mp.size()==2){
        if(mp.find(-1)!=mp.end() && mp.find(n-1)!=mp.end())sum=true;
     }
     mp.clear();
     for(int i=0;i<n-1;i++){  //decreasing
        int tm=arr[i]-arr[i+1];
        mp[tm]++;
     }
     if(mp.size()==1)sum=true;
     if(mp.size()==2){
        if(mp.find(1)!=mp.end() && mp.find(-n+1)!=mp.end())sum=true;
     }

     if(sum){
        cout<<"YES"<<endl;
     }
     else {
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


