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
     int arr[n];
     for(int i=0;i<n;i++)cin>>arr[i];
     int gcd=INT_MAX;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int tmp=__gcd(arr[i],arr[j]);
            gcd=min(tmp,gcd);
        }
     }
     if(gcd<=2)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

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


