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
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        ll j=0,ans=-1;
        for(ll i=1;i<n;i++)
        {
           if(k==1 and s[j]!=s[i])
           {
               ans=max(ans,i+1);
           }
           else if(s[j]!=s[i])
           {
               k--;
               j=i;
           }
        }
        cout<<ans<<endl;


    }
}
