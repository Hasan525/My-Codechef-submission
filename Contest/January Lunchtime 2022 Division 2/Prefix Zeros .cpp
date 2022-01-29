#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)





int main( )
{

    tc
    {
        ll n,k,ans=0;
        string s;
        cin>>n>>k>>s;
        ll l=0;

        ll i=0;
        bool flag=false;
        while(s[i]=='0') i++,flag=true;
        ll x=10-(s[i]-'0');
        if(x<=k and flag==false)
        {
            while(s[i+1]>=s[i] and i<n)  i++;
            k-=x;
            l=i;
            ans=1;
        }
        if(ans or flag)
        {
            if(flag==false) i++;
            for( ; i<n and k>9; i++)
            {
                if(k>=10)
                {

                    while(s[i+1]>=s[i] and i<n)  i++;
                    l=i;
                    k-=10;

                }
            }
        }
        while(s[i]=='0') i++,flag=true;
        cout<<i<<endl;

    }
}
