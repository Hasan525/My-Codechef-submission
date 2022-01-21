#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)


int main()
{
    tc
    {
        ll n,p,k;cin>>n>>p>>k;
        ll cnt=p%k;
        ll res=n/k;
        res=res*cnt;
        ll c=cnt-1;
        if(n%k<c)
            c=n%k;
        res+=c;
        cnt=p/k;
        if(p%k)
            cnt++;
        res+=cnt;
        cout<<res<<endl;
    }
}
