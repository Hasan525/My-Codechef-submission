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
        string s,t;
        for(ll i=0;i<n;i++)
        {
            cin>>s;
            if(s[i]=='0')
                t+='1';
            else
                t+='0';

        }
        cout<<t<<endl;
    }
}
