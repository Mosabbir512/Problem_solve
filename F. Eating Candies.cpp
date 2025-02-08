#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    if(n==1) {
        cout<<0<<endl;
        return;
    }
    int i=0,j=n-1,ans=0;
    int s1=v[0],s2=v[n-1];
    int ind1=1,ind2=1;
    while(i<j) {
        if(s1==s2) {
            ans=max(ans,ind1+ind2);
            i++;++ind1;
            s1+=v[i];
            j--;ind2++;
            s2+=v[j];
        } else if(s1<s2) {
            i++;
            s1+=v[i];
            ind1++;
        } else {
            j--,ind2++;
            s2+=v[j];
        }

    }
    cout<<ans<<endl;
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


