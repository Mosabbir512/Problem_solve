#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int a,b,c,d;
     scanf("%d:%d",&a,&b);
     scanf("%d:%d",&c,&d);
     int tm1=a*60+b;
     int tm2=c*60+d;
     int tm=tm2-tm1;
     tm/=2;
     tm1+=tm;
     int q=tm1/60,r=tm1%60;
     if(q<10)cout<<0;cout<<q<<":";
     if(r<10)cout<<0;cout<<r;
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
    return 0;
}


