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
        ll n;cin>>n;
        ll ans=pow(2,n);
        ll sum=1;
        cout<<1<<" ";
        for(ll i=1;i<n;i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<ans-sum;
        cout<<endl;
    }

}
