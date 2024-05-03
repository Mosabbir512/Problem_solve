#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
void solve(){
     int n;cin>>n;
     int arr[n],ans[n];
     for(int i=1;i<n;i++)cin>>arr[i];
     ans[0]=arr[0]=arr[1]+1;
     for(int i=1;i<n;i++){
         if(arr[i-1]>arr[i])ans[i]=arr[i];
         else{
            while(arr[i-1]<=arr[i])
                arr[i-1]=arr[i-1]+arr[i-2];
         }
         ans[i]=arr[i];
     }
     print(arr);
     //cout<<endl<<endl;
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


