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
        ll n;
        cin>>n;
        ll arr[n];
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
           cin>>arr[i];
           mp[arr[i]]++;
        }
        if(n<=2)
        {
            cout<<0<<endl;
            continue;
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
           ans=max(mp[arr[i]],ans);
        }
        if(ans==1)
            cout<<n-2<<endl;
        else
        cout<<n-ans<<endl;

    }
}
