#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,m;cin>>n>>m;
     int tmx=INT_MAX,tmy=INT_MAX;
     char ch[n+1][m+1];
     set<int>stx,sty;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ch[i][j];
            if(ch[i][j]=='#'){
                tmx=min(tmx,i);
                tmy=min(tmy,j);
                stx.insert(i);
                sty.insert(j);
            }
        }
     }
     int n1=stx.size();
     int n2=sty.size();
     int center_x=n1/2;
     int center_y=n1/2;
     if(n1&1)center_x++;
     if(n2&1)center_y++;
     cout<<center_x+tmx-1<<" "<<center_y+tmy-1<<endl;
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


