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
     string s;cin>>s;
     int arr[26];
     for(int i=0;i<26;i++)arr[i]=0;
     for(int i=0;i<n;i++){
        arr[s[i]-65]++;
     }
     int ct=0;
     for(int i=0;i<26;i++){
        if(arr[i]>=i+1)ct++;
     }
     cout<<ct<<endl;
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


