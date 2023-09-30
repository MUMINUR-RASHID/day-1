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
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<string,int>mp1;
        map<string,int>mp2;
        map<string,int>mp3;
        int p1=0,p2=0,p3=0;
        for(int i=0;i<n;i++)
        {
            string s; cin>>s;
            mp1[s]=1;
            p1+=3;
        }
        for(int i=0;i<n;i++)
        {
            string s; cin>>s;
            if(mp1[s])
            {
                p1-=2;
                mp2[s]=1;
                p2+=1;
            }
            else 
            {
                mp2[s]=1;
                p2+=3;
            }
        }
        for(int i=0;i<n;i++)
        {
            string s; cin>>s;
            if(mp1[s]&&mp2[s])
            {
                p1-=1;
                p2-=1;
                mp3[s]=1;
            }
            else if(mp1[s])
            {
                p1-=2;
                mp3[s]=1;
                p3+=1;
            }
            else if(mp2[s])
            {
                p2-=2;
                mp3[s]=1;
                p3+=1;
            }
            else
            {
                mp3[s]=3;
                p3+=3;
            }
        }
        cout<<p1<<" "<<p2<<" "<<p3<<endl;

    }
    return 0;
}
