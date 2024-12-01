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
     n*=4;
     int arr[n];
     for(int i=0;i<n;i++)cin>>arr[i];
     sort(arr,arr+n);
     vector<int>v;
     for(int i=0;i<n;i+=2){
        if(arr[i]==arr[i+1])v.pb(arr[i]);
        else {
            cout<<"NO"<<endl;
            return;
        }
     }
     int k=v.size();
     int ans=v[0]*v[k-1];
    // print(v);
     for(int i=1;i<k/2;i++){
        int tm=v[i]*v[k-i-1];
        if(ans!=tm){
            cout<<"NO"<<endl;
            return;
        }
     }
     cout<<"YES"<<endl;

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


