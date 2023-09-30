#include<bits/stdc++.h>
using namespace std;


typedef  long long ll;
typedef  long int lli;
typedef  double dl;
typedef long double ld;
typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  pair<int,int> pii;
typedef  pair<ll,ll> pll;
typedef  vector<pii>vpi;
typedef  vector<pll> vpl;

#define     pb       push_back
#define     del       pop_back
#define     MP        make_pair
#define     F         first
#define     S         second
#define     sz(x)     (int)x.size()
#define     all(a)    (a).begin(),(a).end()
#define     faster    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define     endl      '\n'
#define     mem(a,b)  memset(a,b,sizeof(a))
#define     mod       1000000007
#define     gcd(a,b)  __gcd(a,b)
#define     pf        printf
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"

const char nl='\n';


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int j,g,k;
        cin>>j>>g>>k;

        vector<int>p1;
        vector<int>p2;
        long long int s1=0,s2=0;
        int ma=INT_MIN;
        for(int i=0; i<j; i++)
        {
            int x;
            cin>>x;
            p1.push_back(x);
            ma=max(ma,x);
            s1+=x;
        }
        for(int i=0; i<g; i++)
        {
            int x;
            cin>>x;
            p2.push_back(x);
            ma=max(ma,x);
            s2+=x;
        }
        sort(p1.begin(),p1.end(),greater<int>());
        sort(p2.begin(),p2.end(),greater<int>());
        if(k%2==0)
        {
            for(int i=0; i<2; i++)
            {
                if(i%2==0)
                {
                    if(p1[j-1]<p2[0])
                    {
                        swap(p1[j-1],p2[0]);
                        sort(p1.begin(),p1.end(),greater<int>());
                        sort(p2.begin(),p2.end(),greater<int>());
                    }

                }
                else
                {
                    if(p1[0]>p2[g-1])
                    {
                        swap(p1[0],p2[g-1]);
                        sort(p1.begin(),p1.end(),greater<int>());
                        sort(p2.begin(),p2.end(),greater<int>());

                    }

                }
            }

        }
        else
        {
            for(int i=0; i<=2; i++)
            {
                if(i%2==0)
                {
                    if(p1[j-1]<p2[0])
                    {
                        swap(p1[j-1],p2[0]);
                        sort(p1.begin(),p1.end(),greater<int>());
                        sort(p2.begin(),p2.end(),greater<int>());
                    }

                }
                else
                {
                    if(p1[0]>p2[g-1])
                    {
                        swap(p1[0],p2[g-1]);
                        sort(p1.begin(),p1.end(),greater<int>());
                        sort(p2.begin(),p2.end(),greater<int>());

                    }

                }
            }
        }


        int s=0;
        for(auto v:p1)
        {

            s+=v;
        }
        cout<<s<<endl;
    }
    return 0;
}
