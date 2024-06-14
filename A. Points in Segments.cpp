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
     int arr[m+1];
     for(int i=1;i<=m;i++)arr[i]=-1;
     for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        for(int j=a;j<=b;j++){
            arr[j]=0;
        }
     }
     set<int>st;
     for(int i=1;i<=m;i++){
        if(arr[i])st.insert(i);
     }
     cout<<st.size()<<endl;
     print(st);
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


