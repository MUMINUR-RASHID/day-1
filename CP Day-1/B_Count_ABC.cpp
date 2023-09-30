#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    string s;
    cin>>s;
    string t="ABC";
    string k="";
    int i=0,j=0,c=0;
    while(j<n)
    {
        k+=s[j];
        if(j>=2)
        {
            if(k==t) c++;
            k.erase(0,1);
            i++;
        }
        j++;
    }
    cout<<c<<endl;
    return 0;
}