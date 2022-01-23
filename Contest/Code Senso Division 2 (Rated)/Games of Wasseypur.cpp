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
       string s;cin>>s;
       ll ans=0;
       for(ll i=0;i<n-1;i++)
            if(s[i]!=s[i+1])
            ans++;
        ans++;
       if(ans%3==1 || ans%3==0)
        cout<<"SAHID"<<endl;
       else
        cout<<"RAMADHIR"<<endl;
    }
}
