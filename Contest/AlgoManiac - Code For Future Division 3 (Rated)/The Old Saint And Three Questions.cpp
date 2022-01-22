#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)




int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    tc
    {
        map<ll,ll>mp,m;
        ll k=3,a;
        while(k--)
        {
            cin>>a;
            mp[a]++;
        }
        k=3;
        while(k--)
        {
            cin>>a;
            m[a]++;
        }
        if(mp[1]==m[1])
            cout<<"Pass"<<endl;
        else
            cout<<"Fail"<<endl;
    }


}
