#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
#define  si set<ll>
#define pqi  priority_queue<pair<ll, ll> >
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define reP(i,a,n) for(ll i=a;i<=n;i++)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define st string
#define sz size()
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)
int main()
{
    ll d1,v1,d2,v2,p;cin>>d1>>v1>>d2>>v2>>p;
    if(d1>d2)
    {
        swap(d1,d2);
        swap(v1,v2);
    }
    ll ans=d1-1;
    ll sum=0;
    while(d1<d2 && sum<p)
    {
        sum+=v1;
        ans++;
        d1++;
    }
    ll v=v1+v2;
    while(sum<p)
    {
        ans++;
        sum+=v;
    }
    cout<<ans<<endl;
}
