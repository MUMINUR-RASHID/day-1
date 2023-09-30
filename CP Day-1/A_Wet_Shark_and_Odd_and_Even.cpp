#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n; cin>>n;
    long long int mi=INT_MAX;
    long long int s=0;
    for(int i=0;i<n;i++)
    {
        long long int x; cin>>x;
        s+=x;
        if(x%2==1) mi=min(mi,x);
    }
    if(s%2==1) cout<<s-mi<<endl;
    else cout<<s<<endl;
    return 0;
}
