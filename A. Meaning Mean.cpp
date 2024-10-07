#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n;cin>>n;
     multiset<long long>st;
     for(int i=0;i<n;i++){
        int a;cin>>a;
        st.insert(a);
     }
     while(st.size()>1){
        int fs=*st.begin();
        int snd=*++st.begin();
        st.erase(st.begin());
        st.erase(st.begin());
        st.insert((fs+snd)/2);
        //print(st);
     }
     print(st);
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


