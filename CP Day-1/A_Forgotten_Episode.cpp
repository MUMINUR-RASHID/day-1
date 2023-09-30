#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n; cin>>n;
    long long int s=0;
    for(int i=0;i<n-1;i++)
    {
        long long int x; cin>>x;
        s+=x;
    }
    long long int t;
    long long int k;
    if(n%2==0) 
    {
        k=n/2;
        t=n+1;
    }
    else 
    {
        k=(n+1)/2;
        t=n;
    }
    cout<<(k*t)-s<<endl;
    return 0;
}
