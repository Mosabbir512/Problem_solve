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
     set<int>st;
     st.insert(n);
     if(n==m){
        cout<<"YES"<<endl;
        return;
     }
     while(!st.empty()){
        //print(st);
        int val=*(--st.end());
        st.erase(--st.end());
        if(val%3==0){
            int a=val/3;
            int b=a*2;
            if(a==m || b==m){
                cout<<"YES"<<endl;
                return;
            }
            else {
                if(a%3==0)st.insert(a);
                if(b%3==0)st.insert(b);
            }
        }
     }
     cout<<"NO"<<endl;
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


