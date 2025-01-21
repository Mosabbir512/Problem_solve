#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
const int N=200010;
const int M=1e9+7;
int arr[N];
int dp[N][2];
int n;
int fun(int i,int turn){
    if(i>=n)return dp[i][turn]=0;
    if(dp[i][turn]!=-1)return dp[i][turn];
    if(turn){
        int mn=M;
        if(i<n && arr[i]==0)mn=min(mn,fun(i+1,turn^1));
        if(i<n && arr[i]==1)mn=min(mn,fun(i+1,turn^1)+1);
        if(i+1<n && arr[i]==0 && arr[i+1]==0)mn=min(mn,fun(i+2,turn^1));
        if(i+1<n && arr[i]==0 && arr[i+1]==1)mn=min(mn,fun(i+2,turn^1)+1);
        if(i+1<n && arr[i]==1 && arr[i+1]==0)mn=min(mn,fun(i+2,turn^1)+1);
        if(i+1<n && arr[i]==1 && arr[i+1]==1)mn=min(mn,fun(i+2,turn^1)+2);
        return dp[i][turn]=mn;
    }
    else{
        int mn=min(fun(i+1,turn^1),fun(i+2,turn^1));
        return dp[i][turn]=mn;
    }

}
void solve(){
     cin>>n;
     for(int i=0;i<n;i++)cin>>arr[i];
     memset(dp,-1,sizeof(dp));
     fun(0,1);

     cout<<dp[0][1]<<endl;
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


