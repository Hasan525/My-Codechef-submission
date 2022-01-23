#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)





int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    tc
    {
        ll n,v;
        cin>>n>>v;
        ll cnt=(n*(n-1))/2;
        v=min(n-1,v);
        ll m=v;
        v=max(0ll,n-v);
        m+=(v*(v+1))/2;
        m--;
        cout<<cnt<<" "<<m<<endl;

    }
}
