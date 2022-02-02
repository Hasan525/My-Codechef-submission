#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
const ll N=1000000000+2;





int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    tc
    {
      ll x,a,b;cin>>x>>a>>b;
      ll n=(x*b)/a;
      ll ans=0;
      for(ll i=1;i*i<=n;i++)
      {
        if(ans>x)
            break;
        if(n%i==0)
        {
            ans+=i;
            if(i*i!=n)
                ans+=(n/i);
        }
      }

      if(ans==x)
      {
          cout<<n<<endl;
      }
      else
        cout<<-1<<endl;

    }
}
