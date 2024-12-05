#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
int k=150002;
void solve() {
    int n;
    cin>>n;
    int arr[k+1];
    for(int i=0; i<=k; i++)arr[i]=0;
    for(int i=0; i<n; i++) {
        int tm;
        cin>>tm;
        arr[tm]++;
    }
    for(int i=1; i<k; i++) {
        if(arr[i]==1)continue;
        else if(arr[i]==0) {
            if(arr[i+1]>=1) {
                arr[i]++;
                arr[i+1]--;
            }
        } else if(arr[i]>=2) {
            arr[i+1]++;
            arr[i]--;
        }
    }
    int ct=0;
    for(int i=1;i<k;i++){
        if(arr[i])ct++;
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


