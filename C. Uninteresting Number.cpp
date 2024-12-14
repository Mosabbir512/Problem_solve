#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
void solve() {
    string s;
    cin>>s;
    int sum=0,n=s.size();
    map<int,int>mp;
    for(int i=0; i<n; i++) {
        sum+=s[i]-48;
        int tm=s[i]-48;
        mp[tm]++;
    }
    int r=sum%9;
    // cout<<sum<<" "<<r<<endl;
    if(r==0)cout<<"YES"<<endl;
    else if(r==1) {
        if(mp[3]>=1 && mp[2]>=1)cout<<"YES"<<endl;
        else if(mp[2]>=4)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } else if(r==2) {
        if(mp[3]>=2 && mp[2]>=2)cout<<"YES"<<endl;
        else if(mp[3]>=1 && mp[2]>=5)cout<<"YES"<<endl;
        else if(mp[2]>=8)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } else if(r==3) {
        if(mp[3]>=1)cout<<"YES"<<endl;
        else if(mp[2]>=3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } else if(r==4) {
        if(mp[3]>=2 && mp[2]>=1)cout<<"YES"<<endl;
        else  if(mp[3]>=1 && mp[2]>=4)cout<<"YES"<<endl;
        else if(mp[2]>=7)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } else if(r==5) {
        if(mp[2]>=2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } else if(r==6) {
        if(mp[3]>=2)cout<<"YES"<<endl;
        else if(mp[3]>=1 && mp[2]>=3)cout<<"YES"<<endl;
        else if(mp[2]>=6)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } else if(r==7) {
        if(mp[2]>=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } else {
        if(mp[3]>=1 && mp[2]>=2)cout<<"YES"<<endl;
        else if(mp[2]>=5)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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


