#include<bits/stdc++.h>
using namespace std;
int a[26];
int main()
{
    int t; cin>>t;
    while(t--)
    {
        for(int i=0;i<26;i++) a[i]=0;
        int n; cin>>n;
        string s; cin>>s;
        for(auto c:s)
        {
            if(a[c-'A']==0) 
            {
                a[c-'A']=1;
                n++;
            }
        }
        cout<<n<<endl;

    }
    return 0;
}