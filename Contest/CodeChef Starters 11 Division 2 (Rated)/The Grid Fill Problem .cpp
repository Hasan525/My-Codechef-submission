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
        ll n;
        cin>>n;
        if(n%2)
        {
            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<n; j++)
                {
                    if(i==j)
                        cout<<-1<<" ";
                    else
                        cout<<1<<" ";

                }
                cout<<endl;
            }
        }
        else
        {
            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<n; j++)
                {
                    cout<<-1<<" ";

                }
                cout<<endl;
            }
        }
    }

}
