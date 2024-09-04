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
    if(s.size()>=2) {
        if(s[0]=='1' && s[1]=='0') {
            if(s.size()==3) {
                if(s[2]>='2')
                    cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            } else {
                  if(s[2]>='1')cout<<"YES"<<endl;
                   else cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;
    } else cout<<"NO"<<endl;
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


