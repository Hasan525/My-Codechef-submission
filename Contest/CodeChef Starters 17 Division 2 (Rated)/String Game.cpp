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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll a=0,b=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='0')
                a++;
            else
                b++;
        }
        if(a==0 || b==0)
            cout<<"Bob"<<endl;
        if(a==1 || b==1 || n%2)
            cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}
