#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    ll mn=min(a/3,b/2);
    mn=min(mn,c/2);
    ll ans=mn*3+mn*2*2;
    vector<int>v= {2,1,1,2,3,1,3,2,1,1,2,3,1,3};
    a=a-(3*mn),b=b-(2*mn),c=c-(2*mn);
    //cout<<a<<" " <<b<<" "<<c<<endl;
    ll mx=0;
    for(int i=0; i<7; i++) {
        int aa=a,bb=b,cc=c;
         ll ct=0;
        for(int j=i; j<i+7; j++) {
            int tm=v[j];
            bool y=false;
            if(tm==1) {
                if(aa>=1)--aa,ct++;
                else y=true;
            } else if(tm==2) {
                if(bb>=1)--bb,ct++;
                else y=true;
            } else {
                if(cc>=1)--cc,ct++;
                else y=true;
            }

            if(y)break;
        }
        mx=max(mx,ct);
    }
    cout<<ans+mx<<endl;

}
int main() {
    fast;
    int t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


