#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int k=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='Y')
            {
                i++;
                if(i<n)
                {
                    if(s[i]=='e')
                    {
                        i++;
                        if(i<n)
                        {
                            if(s[i]=='s')
                                continue;
                            else
                            {
                                k=1;
                                break;
                            }
                        }
                    }
                    else
                    {
                        k=1;
                        break;
                    }
                }
            }
            else if(s[i]=='e')
            {
                i++;
                if(i<n)
                {
                    if(s[i]=='s')
                        continue;
                    else
                    {
                        k=1;
                        break;
                    }
                }
            }
            else if(s[i]=='s')
            {
                continue;
            }
            else
            {
                k=1;
                break;
            }
        }
        if(k==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
