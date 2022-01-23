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
       bool flag=false;
       ll gcd=arr[0];
       for(ll i=1;i<n;i++)
       {
           if(gcd%arr[i])
            flag=true;
           gcd=min(gcd,arr[i]);
       }
       if(flag)
        cout<<-1<<endl;
       else
        for(ll i=0;i<n;i++)
        cout<<arr[i]<<" ";
       cout<<endl;

    }
}
