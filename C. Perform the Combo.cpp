#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
void solve(){
    int n,m;cin>>n>>m;
    string s;cin>>s;
    int ar[m+1];
    for(int i=1;i<=m;i++)cin>>ar[i];
    int br[n+1];
    for(int i=0;i<=n;i++)br[i]=0;
    for(int i=1;i<=m;i++){
        int tm=ar[i];
        br[tm+1]--;
    }
    //print(br);
    map<char,int>mp;
    m=m+1;
    for(int i=1;i<=n;i++){
        char ch=s[i-1];
        m+=br[i];
        mp[ch]+=m;
    }
    for(int i=0;i<26;i++){
        char ch=i+97;
        cout<<mp[ch]<<" ";
    }
    cout<<endl;

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


