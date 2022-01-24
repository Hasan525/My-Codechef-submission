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
        string t="abc",s="";
        ll cnt=n/3;
        for(ll i=0;i<cnt;i++)
            s+=t;
        if(n%3==2)
            s+="ab";
        else if(n%3==1)
            s+="a";
            cout<<s<<endl;

    }
}
