#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
void solve(){
     int n;cin>>n;
     int arr[n+1];
     vector<int>v,ans;
     map<int,int>mp;
     for(int i=1;i<=n;i++){
        cin>>arr[i];
        mp[i]=arr[i];
        if(arr[i]!=0)v.pb(arr[i]);
     }
     srt(v);
     vector<int>missing;
     set<int>st;
     for(int j=0,i=1;i<=n;i++){
        if(j<v.size() && v[j]==i)++j;
        else missing.pb(i);
     }
     for(auto it:missing)st.insert(it);
     vector<int>fm;
     for(int i=0;i<missing.size();i++){
        int tm=missing[i];
        if(mp[tm]==0){
            fm.pb(tm);
        }
     }
     for(int i=0;i<fm.size();++i){
        int tmp=fm[i];
        auto it=st.upper_bound(tmp);
        if(it!=st.end()){
            arr[tmp]=*it;
            st.erase(it);
        }
        else {
            it=st.upper_bound(0);
             arr[tmp]=*it;
            st.erase(it);
        }
     }

     vector<int>tm;
     for(auto it:st)tm.pb(it);

     int k=0;
     for(int i=1;i<=n;i++){
        if(arr[i]==0){
            if(k<tm.size()){
                arr[i]=tm[k];
                ++k;
            }
        }
     }

    // cout<<"ans = ";
     for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;

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



