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
    int d=n/3;
    string s;
    cin>>s;
    int one=0,two=0,zero=0;
    for(int i=0; i<n; i++) {
        if(s[i]=='0')zero++;
        else if(s[i]=='1')one++;
        else two++;
    }
    int o_need=0,t_need=0,z_need=0;
    if(one<d)o_need=d-one;
    if(two<d)t_need=d-two;
    if(zero<d)z_need=d-zero;
    int z=0,o=0,t=0;
    for(int i=0; i<n; i++) {
        char ch=s[i];
        if(z_need) {
            if(ch=='2' && two>d) {
                s[i]='0';
                two--;
                z_need--;
            } else if(ch=='1' && one>d) {
                s[i]='0';
                one--;
                z_need--;
            }
        } else if(o_need) {
            if(ch=='2' && two>d) {
                s[i]='1';
                two--;
                o_need--;
            } else if(ch=='0' && zero>d && z>=d) {
                s[i]='1';
                one--;
                o_need--;

            }
        } else {
            if(ch=='0' && zero>d && z>=d) {
                s[i]='2';
                t_need--;
                zero--;
            } else if(ch=='1' && one>d && o>=d) {
                s[i]='2';
                t_need--;
                one--;
            }
        }
        if(s[i]=='0')z++;
        else if(s[i]=='1')o++;
        else t++;
    }
    cout<<s<<endl;

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


