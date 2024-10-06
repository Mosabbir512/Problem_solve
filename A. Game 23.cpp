#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,m;
    cin>>n>>m;
    if(m%n==0){
        n=m/n;
        int ct=0;
        while(n%2==0){
            ct++;n/=2;
        }
        while(n%3==0){
            ct++;n/=3;
        }
        if(n>1){
            cout<<-1<<endl;
        }
        else cout<<ct<<endl;
    }
    else cout<<-1<<endl;
}
int main() {
    fast;
    int t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


