#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
void solve(){
     int n,m;cin>>n;
     vector<int>a(n),b(n),hobe_last;
     for(int i=0;i<n;i++)cin>>a[i];
     for(int i=0;i<n;i++)cin>>b[i];
     cin>>m;
     vector<int>d(m);
     map<int,int>we_have,need;
     for(int i=0;i<m;i++){
        cin>>d[i];
        we_have[d[i]]++;
     }
     for(int i=0;i<n;i++){
        if(a[i]==b[i])hobe_last.pb(b[i]);
        else{
            hobe_last.pb(b[i]);
            need[b[i]]++;
        }
     }
     bool pos=true;
     for(auto it:need){
        int ind=it.first,val=it.second;
        if(we_have.find(ind)!=we_have.end()){
            int val2=we_have[ind];
            if(val2>=val)continue;
            else {
                pos=false;
                break;
            }
        }
        else {
            pos=false;
            break;
        }
     }

     if(pos){
        int last_element=d[m-1];
        for(int i=0;i<hobe_last.size();i++){
            if(hobe_last[i]==last_element){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
     }
     else cout<<"NO"<<endl;
     cout<<endl;



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


