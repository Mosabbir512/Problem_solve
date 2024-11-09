#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    string s1,s="0";
    cin>>s1;
    for(int i=0; i<s1.size(); i++)s+=s1[i];
    int n=s.size(),ct=0;
    for(int i=1; i<=n-3; i++) {
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')ct++;
    }

    int q;
    cin>>q;
    while(q--) {
        int j;
        cin>>j;
        char ch;
        cin>>ch;
        int st=j-3,en=j+3;
        if(st<1)st=1;
        if(en>n)en=n;
        bool yes1=false,yes2=false;
        for(int i=st; i<=en-3; i++) {
            if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
                yes1=true;
        }
        s[j]=ch;
        for(int i=st; i<=en-3; i++) {
            if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
                yes2=true;
        }
        if(yes1==true && yes2==false)ct--;
        else if(yes1==false && yes2==true)ct++;
        if(ct<0)ct=0;
        if(ct)cout<<"YES"<<endl;
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


