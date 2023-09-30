#include<bits/stdc++.h>
using namespace std;
int a[26];

int main()
{
    string s;
    cin>>s;
    for(auto c:s)
    {
        a[c-'a']=1;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            char c='a'+i;
            cout<<c<<endl; return 0;
        }
    }
   cout<<"None"<<endl;
    return 0;
}