#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)cin>>arr[i];
     ll s1=0,s2=0,ct1=0,ct2=0,s=0;
     for(int i=0;i<n;i++){
        s+=arr[i];
     }
     if(s%3!=0){
         cout<<0;
         return;
     }
     for(int i=0;i<n-1;i++){
          s1+=arr[i];
          if(s1==(s*2)/3){
            ct2+=ct1;
          }
          if(s1==s/3){
            ct1++;
          }
     }
     cout<<ct2;

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


