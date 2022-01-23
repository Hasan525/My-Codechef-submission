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
       ll x,y,k;cin>>x>>y>>k;
       if(abs(x)%k==0 && abs(y)%k==0)
          cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
