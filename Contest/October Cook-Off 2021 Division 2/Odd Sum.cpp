#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)




double arr[1000000];
int main()

{

    tc
    {
        ll n;cin>>n;
        ll arr[n+1][n+1];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
                arr[i][j]=0;
        }
        ll x,y;
        for(ll i=0;i<n;i++)
        {
            cin>>x>>y;
            arr[x][y]=1;
        }
        map<ll,ll>mp;
        bool flag=true;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                mp[i+j]+=arr[i][j];
            }
        }
        ll m=1;

        for(ll i=3;i<n+n;i++)
        {
            if(i>n+1)
                m--;
            else
                m++;
            //cout<<i<<" "<<m<<endl;
            if(mp[i]==m)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
