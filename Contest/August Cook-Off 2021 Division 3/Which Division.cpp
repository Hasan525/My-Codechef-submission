#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)




int main()
{
    tc
    {
        ll n;cin>>n;
        if(n>=2000)
            cout<<1<<endl;
        else if(n<2000 && n>=1600)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
}
