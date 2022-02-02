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

        ll x;
        cin>>x;
        if(x==1)
            cout<<1<<" "<<2<<" "<<5<<endl;
        else if(x%2==0)
            cout<<x<<" "<<x+1<<" "<<x*2<<endl;
        else
            cout<<1<<" "<<x-1<<" "<<x<<endl;

    }
}
