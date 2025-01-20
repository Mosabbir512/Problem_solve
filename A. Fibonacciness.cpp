#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
      int arr[5+1];
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      arr[0]=a,arr[1]=b,arr[3]=c,arr[4]=d;
      int ans=0;
      for(int i=-200;i<=200;i++){
        int ct=0;
        arr[2]=i;
        for(int i=0;i<3;i++){
            if(arr[i]+arr[i+1]==arr[i+2])ct++;
        }
        ans=max(ans,ct);
      }cout<<ans<<endl;
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


