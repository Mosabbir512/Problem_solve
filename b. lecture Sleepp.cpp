#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,k,total_sum=0,mx=0;
    cin>>n>>k;
    int arr[n],trr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    for(int i=0; i<n; i++)cin>>trr[i];
    int sum=0;
    for(int i=0;i<n;i++){
        if(trr[i]==1){
            sum+=arr[i];
            arr[i]=0;
        }
    }
    int ct=0;
    for(int i=0;i<n;i++){
        ct+=arr[i];
        if(i>=k){
            ct-=arr[i-k];
        }
        mx=max(mx,ct);
    }
    cout<<sum+mx<<endl;


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


