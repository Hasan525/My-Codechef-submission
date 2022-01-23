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
      ll arr[n];
      for(ll i=0;i<n;i++)
            cin>>arr[i];
      for(ll i=0;i<n;i++)
      {
          ll ans=0;
          if(i && i<n-1)
          {
              ans=max(ans,arr[i]&arr[i+1]);
              ans=max(ans,arr[i]&arr[i-1]);
          }
          else if(i==0)
              ans=arr[i]&arr[i+1];
          else
            ans=arr[i]&arr[i-1];
          cout<<ans<<" ";
      }
      cout<<endl;
    }
}
