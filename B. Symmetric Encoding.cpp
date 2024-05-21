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
     string s;cin>>s;
     set<char>st;
     for(int i=0;i<n;i++)st.insert(s[i]);
     int tm=st.size();
     char ch[tm];
     int i=0;
     for(auto it:st){
        ch[i]=it;
        i++;
     }
     //print(ch);
     for(i=0;i<n;i++){
        int ind;
        for(int j=0;j<tm;j++){
            if(ch[j]==s[i]){
                ind=j;break;
            }
        }
        ind=tm-1-ind;
        cout<<ch[ind];
     }cout<<endl;
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


