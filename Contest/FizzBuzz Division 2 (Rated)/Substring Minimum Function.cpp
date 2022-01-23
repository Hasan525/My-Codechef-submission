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
        cin>>n>>m;
        if(m==1)
        {
            ll cnt=(n-1)/2;
            ll ans=(cnt*(cnt+1))/2;
            if((n-1)%2)
                cnt++;
            ans+=((cnt*(cnt+1))/2);
            cout<<ans<<endl;
        }
        else
        {
            ll cnt=n-m;
            m++;
            ll res=cnt/m;
            ll d=cnt%m;
            m-=d;
            ll ans=(res*(res+1))/2;
            ans*=m;
            res++;
            cnt=(res*(res+1))/2;
            ans+=(d*cnt);
            cout<<ans<<endl;
        }
    }
}
