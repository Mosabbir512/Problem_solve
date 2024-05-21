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
    string s,ans="";
    cin>>s;
    int r_x=0,r_y=0,h_x=0,h_y=0;
    if(s[0]=='E') {
        r_x++;
    } else if(s[0]=='W') {
        r_x--;
    } else if(s[0]=='N') {
        r_y++;
    } else r_y--;
    ans+='R';
    for(int i=1; i<n; i++) {
        if(s[i]=='E') {           // x++;
            if(r_x<h_x) {
                ans+='R';
                r_x++;
            } else {
                ans+='H';
                h_x++;
            }
        } else if(s[i]=='W') {    //x--
            if(r_x>h_x) {
                ans+='R';
                r_x--;
            } else {
                ans+='H';
                h_x--;
            }
        } else if(s[i]=='N') {     //y++
            if(r_y<h_y) {
                ans+='R';
                r_y++;
            } else {
                ans+='H';
                h_y++;
            }
        } else {                   //y--
            if(r_y>h_y) {
                ans+='R';
                r_y--;
            } else {
                ans+='H';
                h_y--;
            }
        }
    }
    if(r_x==h_x && r_y==h_y){
        set<char>st;
        for(int i=0;i<n;i++){
            st.insert(ans[i]);
        }
        if(st.size()==2)cout<<ans<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
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


