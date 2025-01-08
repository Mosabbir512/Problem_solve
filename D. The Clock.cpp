#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
int convert(string &s) {
    int h=(s[0]-'0')*10+(s[1]-'0');
    int m=(s[3]-'0')*10+(s[4]-'0');
    return h*60+m;
}
void solve() {
    int k;
    string s;
    cin>>s>>k;
    int tot=convert(s);
    set<int>st;

    int ans=0;
    int tm=tot;
    while(1){
        tot+=k;
        tot%=1440;
        int h=tot/60,m=tot%60;
        int a=h/10,b=h%10,c=m/10,d=m%10;
        if(a==d && b==c)st.insert(tot);
        if(tm==tot)break;
    }
    cout<<st.size()<<endl;
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


