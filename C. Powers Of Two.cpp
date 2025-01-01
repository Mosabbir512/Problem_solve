#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
void solve() {
    ll n,k,nn;
    cin>>n>>k;
    nn=n;
    multiset<int>st;
    while(n) {
        int tm=log2(n);
        tm=(1LL<<tm);
        st.insert(tm);
        n-=tm;
    }
    //print(st);
    int siz=st.size();
    if(siz<=k && nn>=k) {
        cout<<"YES"<<endl;
        while(siz!=k) {
            int val=*(--st.end());
            st.erase(--st.end());
            st.insert(val/2);
            st.insert(val/2);
            siz++;
        }
        print(st);
    } else cout<<"NO"<<endl;
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


