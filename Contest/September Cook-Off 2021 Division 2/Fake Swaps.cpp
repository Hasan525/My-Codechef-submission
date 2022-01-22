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
        ll n;cin>>n;
        string s,t;cin>>s>>t;
        if(s==t)
        {
            cout<<"YES"<<endl;
            continue;
        }
        map<char,ll>mp;
        for(ll i=0;i<n;i++)
            mp[t[i]]++;
        if(mp['1'] && mp['0'])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
