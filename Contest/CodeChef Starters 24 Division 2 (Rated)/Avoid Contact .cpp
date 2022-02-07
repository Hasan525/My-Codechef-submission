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
      ll x,y;cin>>x>>y;
      ll cnt=y*2;
      cnt+=(x-y);
      if(x-y==0)
        cnt--;
      cout<<cnt<<endl;

    }
}
