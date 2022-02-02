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
        ll n,m;
        cin>>n;
        ll ans=0;
        while(n>1)
        {
            m=n;
            m++;
            while(m%2==0)
                m/=2;
            if(m==1)
            {
               ans+=(n*(n-1));
               break;
            }
            else
            {
                ll i=1;
                m=n;
                while(m>i-1)
                i*=2;
                i--;
                ll rs=(i-m);
                ans+=i*(n-rs+1);
                n=rs-1;

            }

        }
        cout<<ans<<endl;
     }
}
