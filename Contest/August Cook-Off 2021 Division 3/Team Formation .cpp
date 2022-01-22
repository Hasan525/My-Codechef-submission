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
        ll n;cin>>n;
        ll p=0,e=0,pe=0,cnt,o=0;
        string s,t;cin>>s>>t;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1' && t[i]=='0')
                p++;
            else if(s[i]=='0' && t[i]=='1')
                e++;
            else if(s[i]=='0' && s[i]==t[i])
                o++;
            else
                pe++;
        }
        ll ans=min(p,e);
        //cout<<ans<<endl;
        p-=ans;
        e-=ans;
        if(p)
        {
            cnt=min(pe,p);
           ans+=cnt;
           pe-=cnt;
        }
        else if(e)
        {
            cnt=min(pe,e);
           ans+=cnt;
           pe-=cnt;
        }
        cnt=min(pe,o);
        ans+=cnt;
        pe-=cnt;
        ans+=(pe/2);
        cout<<ans<<endl;
    }
}
