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
        n*=2;
        ll arr[n];
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        ll mex=0;
        while(mp[mex])
        {
            mex++;
        }
        bool flag=true;
        for(ll i=0;i<mex;i++)
            if(mp[i]==1)
                flag=false;
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }


}
