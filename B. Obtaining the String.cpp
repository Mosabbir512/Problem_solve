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
    string s1,s2;
    cin>>s1>>s2;
    map<char,int>m1,m2;
    for(int i=0; i<n; i++) {
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    int s=0;
    for(auto it:m1) {
        char ch=it.first;
        if(m1[ch]==m2[ch])
            s+=m1[ch];
        else break;
    }
    vector<int>ans;
    if(s==n){
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i])continue;
            else {
                char ch=s2[i];int j;
                for( j=i+1;j<n;j++){
                    if(s1[j]==ch){
                        break;
                    }
                }
                for(;j>i;j--){
                    swap(s1[j],s1[j-1]);
                    ans.pb(j);
                }
            }
        }
        cout<<ans.size()<<endl;
        print(ans);
    }
    else cout<<-1<<endl;
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


