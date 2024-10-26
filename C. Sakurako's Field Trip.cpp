#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,ct=0;
    cin>>n;
    int arr[n+2];
    arr[0]=-1;
    arr[n+1]=-1;
    for(int i=1; i<=n; i++)cin>>arr[i];
    for(int i=1; i<=n/2; i++) {
        int j=n-i+1;
        if(i+1==j){
            if(arr[i]==arr[j]){
                ct++;continue;
            }
        }
        int nots=0, swp=0;
        if(arr[i]==arr[i+1])nots++;
        if(arr[j]==arr[j-1])nots++;
        swap(arr[i],arr[j]);
        if(arr[i]==arr[i+1])swp++;
        if(arr[j]==arr[j-1])swp++;
        if(swp==nots)swap(arr[i],arr[j]),ct+=swp;
        else if(swp<nots)ct+=swp;
        else {
            swap(arr[i],arr[j]);
            ct+=nots;
        }
    }
    cout<<ct<<endl;
}
int main() {
    fast;
    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


