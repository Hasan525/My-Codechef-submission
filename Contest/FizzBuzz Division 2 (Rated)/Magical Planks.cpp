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
        string s;
        cin>>s;
        ll ans=1;
        for(ll i=1; i<n; i++)
        {
            if(s[i]!=s[i-1])
                ans++;
        }
        cout<<ans/2<<endl;
    }
}
