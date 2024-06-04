#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
void solve() {
    int n;
    cin>>n;
    int arr[n];
    vector<int>gcd_arr;
    for(int i=0; i<n; i++)cin>>arr[i];
    for(int i=0; i<n-1; i++) {
        gcd_arr.pb(__gcd(arr[i],arr[i+1]));
    }
    int ind;
    if(n==3){
        cout<<"YES"<<endl;
        return;
    }
    bool pos=true;
    for(int i=0; i<n-2; i++) {
        if(gcd_arr[i]<=gcd_arr[i+1])continue;
        else {
            ind=i;
            pos=false;
            break;
        }
    }
    //cout<<"ind= "<<ind<<" =";print(gcd_arr);
    if(pos)cout<<"YES"<<endl;
    else {
        if(ind>0)
        ind=ind-1;
        vector<int>gc_tm,tm;
        for(int k=1; k<=5; k++) {
            if(ind==n)break;
            tm.clear();gc_tm.clear();
            for(auto it:arr)tm.pb(it);
            tm.erase(tm.begin()+ind);
            int siz=tm.size();
            for(int i=0;i<siz-1;i++){
                gc_tm.pb(__gcd(tm[i],tm[i+1]));
            }
            //cout<<arr[ind]<<"=";print(gc_tm);
            bool no=true;
            for(int i=0;i<siz-2;i++){
                if(gc_tm[i]<=gc_tm[i+1])continue;
                else {
                    no=false;
                    break;
                }
            }
            if(no){
                cout<<"YES"<<endl;
                return;
            }
            ++ind;
        }
        cout<<"NO"<<endl;
    }
}
int main() {
    fast;
    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}

