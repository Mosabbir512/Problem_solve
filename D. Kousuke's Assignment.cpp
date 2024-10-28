#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,ans=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        set<long long>st;
        st.insert(0);
        long long s=0;
        for(int i=0; i<n; i++){
            s+=arr[i];
            int siz=st.size();
            st.insert(s);
            if(st.size()==siz)
            {
                ans++;
                s=0;
                st.clear();
                st.insert(s);
            }
        }
        cout<<ans<<endl;
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

