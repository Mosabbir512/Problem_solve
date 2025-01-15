#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define prll(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int arr[n+1];
    ll sum=0;
    for(int i=0; i<n; i++)cin>>arr[i];
    int ct=0;
    priority_queue<int,vector<int>,greater<int>>pq;// min heap
    for(int i=0;i<n;i++){
        sum+=arr[i];ct++;
        if(arr[i]<0)
        pq.push(arr[i]);
        while(sum<0){
            --ct;
            int val=pq.top();
            pq.pop();
            sum-=val;
        }
        //cout<<ct<<" = ";print(st);
    }
    cout<<ct<<endl;
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

