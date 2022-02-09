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
        ll n,m;cin>>n>>m;
        ll cnt=0,i=0,ans=0;
        while(cnt<n && m>i)
        {
            cnt=pow(2,i);
            i++;
        }
        if(cnt>=n)
            ans++;
        m-=i;
        ans+=m;
        cout<<ans<<endl;

    }

}
