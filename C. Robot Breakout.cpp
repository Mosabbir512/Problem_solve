#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
int pp=1e5;
int nn=-1e5;
void solve(){
     int n;cin>>n;
     int mn_x=nn,mx_x=pp,mn_y=nn,mx_y=pp;
     vector<vector<int>>v;
     for(int i=0;i<n;i++){
        vector<int>tm(6);
        for(int i=0;i<6;i++)cin>>tm[i];
        v.pb(tm);

     }
     for(auto it:v){
         int x=it[0],y=it[1],a=it[2],b=it[3],c=it[4],d=it[5];

        if(a==0){    //  left zero jete parbe na
             if(x>mn_x)mn_x=x;
        }
        if(b==0){  // top zero jete parbe na
            if(y<mx_y)mx_y=y;
        }
        if(c==0){     // right zero jete parbe na
             if(x<mx_x)mx_x=x;
        }
        if(d==0){  //  down zero jete parbe na
             if(y>mn_y)mn_y=y;
        }
     }
     if(mn_x>mx_x || mn_y>mx_y){
        cout<<0<<endl;
        return;
     }
     cout<<1<<" "<<mn_x<<" "<<mn_y<<endl;
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


