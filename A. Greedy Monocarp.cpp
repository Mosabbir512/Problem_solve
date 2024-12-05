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
     int arr[n];
     for(int i=0;i<n;i++)cin>>arr[i];
     sort(arr,arr+n);
     reverse(arr,arr+n);
     //print(arr);
     int tm=0,i=0;
     for(int i=0;i<n;i++){
        if(tm<k){
            int need=k-tm;
            if(arr[i]<=need)tm+=arr[i];
            else {
                cout<<k-tm<<endl;
                return;
            }
        }
        else break;
     }
     if(tm<k){
        cout<<k-tm<<endl;
        return;
     }
     cout<<0<<endl;
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


