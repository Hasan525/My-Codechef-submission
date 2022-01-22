#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)




int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    tc
    {
        ll n,k,l,mx=0;
        cin>>n>>k>>l;
        map<ll,ll>mp;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
            mx=max(mx,arr[i]);
        }
        if(arr[n-1]==mx && mp[mx]==1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        if(k<=0)
        {
            cout<<"No"<<endl;
            continue;
        }
        ll cnt=mx-arr[n-1]+1;
        ll res=cnt/k;
        if(cnt%k)
            res++;
        if(res<l)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;



    }

}
