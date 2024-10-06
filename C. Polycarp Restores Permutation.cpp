#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
bool check(int brr[]) {
    bool yes=false;
    int n= sizeof(brr) / sizeof(brr[0]);
    for(int i=0; i<n; i++) {
        if(i+1==brr[i])continue;
        else {
            yes=true;
        }
    }
    return yes;
}
void solve() {
    int n;
    cin>>n;
    int ind=0,mx=0;
    int arr[n],brr[n];
    brr[n-1]=0;
    for(int i=0; i<n-1; i++) {
        cin>>arr[i];
        brr[i]=0;
        int tm=arr[i];
        if(tm<0)tm*=-1;
        if(tm>=mx) {
            ind=i;
            mx=tm;
        }
    }
    int a=1,b=1+mx;
    if(arr[ind]>0) {
        brr[ind]=a;
        brr[ind+1]=b;
    } else {
        brr[ind]=b;
        brr[ind+1]=a;
    }
    for(int i=ind+2; i<n; i++) {
        brr[i]=brr[i-1]+arr[i-1];
    }
    for(int i=ind-1; i>=0; i--) {
        brr[i]=brr[i+1]-arr[i];
    }
    set<int>st;
    for(int i=0; i<n; i++)st.insert(brr[i]);
    bool y=true;
    int first=*st.begin();
    if(first<=0)first=1-first;
    else first=first-1;
   // cout<<"first= "<<first<<endl;
    //for(auto it:st)cout<<it<<" ";cout<<endl;
    if(st.size()==n)y=false;
    if(y)cout<<-1<<endl;
    else {
        for(int i=0; i<n; i++) {
            brr[i]+=first;;

        }
        st.clear();
        for(auto it:brr)st.insert(it);
        int i=0;
        for(auto it:st){
            ++i;
            if(it==i)continue;
            else {
                cout<<-1<<endl;
                return;
            }
        }
        print(brr);
    }

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


