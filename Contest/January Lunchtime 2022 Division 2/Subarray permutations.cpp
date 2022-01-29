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
      if(n==k)
      {
         for(ll i=1;i<=n;i++)
            cout<<i<<" ";
         cout<<endl;
          continue;
      }
      if(k==1)
      {
          cout<<-1<<endl;
          continue;
      }
      for(ll i=k;i<=n;i++)
      {
          cout<<i<<" ";
      }
      for(ll i=1;i<k;i++)
        cout<<i<<" ";
      cout<<endl;
    }
}
