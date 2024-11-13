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
     int arr[n*2];
     int jor=0,bj=0;
     for(int i=0;i<2*n;i++){
        cin>>arr[i];
        if(arr[i]&1)bj++;
        else jor++;
     }
     int mx=0;
     if(jor&1)cout<<1<<" ";
     else cout<<0<<" ";
     cout<<min(jor,bj)<<endl;

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


