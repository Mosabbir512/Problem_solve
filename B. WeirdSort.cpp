#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,m;cin>>n>>m;
     int arr[n+1],brr[m+1];arr[0]=-1;
     for(int i=1;i<=n;i++)cin>>arr[i];
     for(int i=1;i<=m;i++)cin>>brr[i];
     sort(brr+1,brr+m+1);
     int str=brr[1],en=brr[1]+1;
     for(int i=2;i<=m;i++){
        if(brr[i-1]+1==brr[i])en=brr[i]+1;
        else {
            sort(arr+str,arr+en+1);
            str=brr[i];
            en=str+1;
        }
     }
     bool y=true;
     sort(arr+str,arr+en+1);
     //cout<<str<<" "<<en<<endl;
     for(int i=1;i<=n;i++){
        if(arr[i-1]<=arr[i])continue;
        else {
            y=false;
            break;
        }
     }
     //print(arr);
     cout<<(y ? "YES" : "NO")<<endl;


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


