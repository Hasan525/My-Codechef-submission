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
        ll n,x;cin>>n;
        vector<ll>a,b;
        while(n--)
        {
            cin>>x;
            if(x%2)
                a.push_back(x);
            else
                b.push_back(x);
        }
        if(a.size() && b.size())
        {
            for(ll i=0;i<a.size();i++)
                cout<<a[i]<<" ";
             for(ll i=0;i<b.size();i++)
                cout<<b[i]<<" ";

                cout<<endl;

        }
        else
            cout<<-1<<endl;

    }


}
