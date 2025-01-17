#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define srt(x) sort(x.begin(),x.end());
#define pb(x) push_back(x);
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl;
#define ll long long
const int N=5e5+5;
int parent[N];
int siz[N];

void make(int v)
{
    parent[v]=v;
    siz[v]=1;

}

int Find(int v)
{
    if(v==parent[v])return v;
    return parent[v]=Find(parent[v]);
}

void Union(int a,int b)
{
    a=Find(a);
    b=Find(b);
    if(a!=b){
        if(siz[a]<siz[b])swap(a,b);
        parent[b]=a;
        siz[a]+=siz[b];
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)make(i);
    for(int i=0; i<m; i++)
    {
        int k,x,y;
        cin>>k;
        if(k==0)continue;
        if(k>=1){
            cin>>x;
        }
        for(int j=1;j<k;j++){
            cin>>y;
            Union(x,y);
        }

    }
    for(int i=1;i<=n;i++){
        int par=Find(i);
        cout<<siz[par]<<" ";
    }
    return 0;
}



