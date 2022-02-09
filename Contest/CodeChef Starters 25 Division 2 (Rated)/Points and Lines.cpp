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
        ll n,x,y,ans=0;cin>>n;
        map<ll,ll>a,b;
        while(n--)
        {
            cin>>x>>y;
            if(a[x]==0 && b[y]==0)
                ans+=2;
            else if(a[x]==0 || b[y]==0)
                ans++;
                a[x]++;
                b[y]++;
        }
        cout<<ans<<endl;
    }


}
