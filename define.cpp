#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
#define String char *
typedef char * String_char;
// switch, case
// file
// pointer
// tree
// inorder ,preorder, postorder
// arr
// char *
// enum
// linked list
// double linked list
// pointer
// typedef
// struct
// arithemetic shif
// logical shift
// bitwise operator
// hash collision

enum TEST{
   TEST_1,
   TEST_2,
   TEST_3
};

struct st{
char ch;
short sh;
char ch1;
short sh1;

} * tt,ff;
void solve() {

   cout<<sizeof(tt)<<endl;
   cout<<sizeof(ff)<<endl;

   int arr[]={100,200,300,-400,-300,300,400,400};
   int *p=&arr[1];
   int *q=(arr+1);

   printf("sakib\n");
   printf("kaku\n");
   cout<<"Mosabbir"<<endl;
   printf("%d\n",TEST_1);
   printf("%d\n",sizeof(TEST_1));
   printf("%d\n",sizeof(TEST));
    printf("sakib\n");


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


