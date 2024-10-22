#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,x,y,ct=0;cin>>n>>x>>y;
     string s;cin>>s;
     string s1="";
     for(int i=0;i<x;i++)s1+='0';
     s1[x-y-1]='1';
     //cout<<s1<<endl;
     for(int i=x-1,j=n-1;i>=0;i--,j--){
        if(s1[i]^s[j])ct++;
     }cout<<ct<<endl;
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


