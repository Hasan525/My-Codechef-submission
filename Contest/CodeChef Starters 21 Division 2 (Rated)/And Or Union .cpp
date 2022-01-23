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
        ll arr[n];
        ll bit[34]={0};
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
            for(ll j=0; j<32; j++)
            {
               ll k=arr[i]>>j;
                if(k&1)
                    bit[j]++;
            }
        }

        ll ans=0;
        for(ll i=0; i<32; i++)
        {
            if(bit[i]>1)
             {
                  ans+=pow(2,i);
             }


        }
        cout<<ans<<endl;

    }
}
