#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
string s1,s;
const int N=2e5+5;
int dp[2][N];
bool isP(int row,int ind){
    bool y=false;
    if(ind==0 && row==0)return dp[row][ind]=true;
    if(dp[row][ind]!=-1)return dp[row][ind];
    if(ind==0 && row!=0)return false;
    if(row&1){
        if(ind>0 && s1[ind-1]=='>'){
            y|=isP(0,ind-1);
            if(ind>1)y|=isP(1,ind-2);
        }
    }
    else{
        if(ind>0 && s[ind-1]=='>'){
            y|=isP(1,ind-1);
            if(ind>1)y|=isP(0,ind-2);
        }
    }
    return dp[row][ind]=y;
}
void solve(){
     int n;cin>>n;
     cin>>s>>s1;
     for(int i=0;i<2;i++){
        for(int j=0;j<=n;j++)dp[i][j]=-1;
     }
     if(isP(1,n-1))cout<<"YES"<<endl;
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


