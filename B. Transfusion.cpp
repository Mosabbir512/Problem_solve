#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%n==0) {
         int tm=sum/n;
         for(int i=0;i<n-2;i++){
            if(arr[i]==tm)continue;
            else if(arr[i]<tm){
                int need=tm-arr[i];
                arr[i]=tm;
                arr[i+2]=arr[i+2]-need;
            }
            else {
                int dilam=arr[i]-tm;
                arr[i+2]+=dilam;
                arr[i]=tm;
            }
         }
         bool y=true;

         for(int i=0;i<n;i++){
            if(arr[i]!=tm){
                y=false;
                break;
            }
         }
         if(y)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

    } else {
        cout<<"NO"<<endl;
    }

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


