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
        ll n;
        cin>>n;
        ll x,a=0,b=0,sum=0;
        for(ll i=0; i<n; i++)
        {
           cin>>x;
           sum+=x;
           if(x%3==1)
            a++;
           else if(x%3==2)
            b++;

        }
       if(sum%3)
        {
            cout<<-1<<endl;
            continue;
        }
       ll res=abs(a-b);
       res/=3;
       res*=2;
       res+=min(a,b);
       cout<<res<<endl;
    }
}
