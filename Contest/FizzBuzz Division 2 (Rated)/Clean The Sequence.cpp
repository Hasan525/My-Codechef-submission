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
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin>>arr[i];
        vector<ll>v;
        v.push_back(arr[0]);
        ll ans=0;
        for(ll i=1; i<n; i++)
        {
            if(arr[i]!=arr[i-1])
            {
                v.push_back(arr[i]);
                ans++;
            }
        }
        if(v.size()==1)
        {
            cout<<0<<endl;
            continue;
        }
        map<ll,ll>mp;
        for(ll i=0;i<v.size();i++)
        {
            if(i==0 || i==v.size()-1)
                mp[v[i]]++;
            else
            {
                if(v[i-1]==v[i+1])
                    mp[v[i]]+=2;
                else
                    mp[v[i]]++;
            }
        }
        for(ll i=1;i<=k;i++)
        {
            cout<<ans-mp[i]<<" ";
        }
        cout<<endl;
    }
}
