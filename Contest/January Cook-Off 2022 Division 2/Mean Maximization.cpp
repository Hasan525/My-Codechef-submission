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
       ll arr[n+2];
       double sum=0;
       for(ll i=0;i<n;i++)
            cin>>arr[i];
       sort(arr,arr+n);
       for(ll i=0;i<n-1;i++)
        sum+=arr[i];
       double ans=((sum)/((double)(n-1)));
       ans+=arr[n-1];
      printf("%.6lf\n",ans);
    }
}
