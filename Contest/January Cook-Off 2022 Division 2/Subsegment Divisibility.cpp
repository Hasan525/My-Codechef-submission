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
        ll n,cnt=6;cin>>n;
        for(ll i=1;i<=n;i++)
        {
            if(i%2)
                cout<<i<<" ";
            else{cout<<cnt<<" ";cnt+=2;}

        }
        cout<<endl;
    }
}
