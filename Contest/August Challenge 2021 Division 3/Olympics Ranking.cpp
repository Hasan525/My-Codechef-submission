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
        map<ll,ll>mp;
       ll a,b,c,d;cin>>a>>b>>c>>d;
       mp[a]++,mp[b]++,mp[c]++,mp[d]++;

        if(mp[a]==4)
            cout<<0<<endl;
        else if(mp[a]==3 || mp[b]==3)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
}
