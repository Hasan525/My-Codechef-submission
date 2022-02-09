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
        ll n,k;cin>>n>>k;
        vector<ll>v;
        v.push_back(1);
        k-=n;
        ll cur=2;
        for(ll i=1;i<n;i++)
        {
            if(k<v.size())
            {
                v.push_back(v[v.size()-k-1]);
                break;
            }
            k-=v.size();
            v.push_back(cur);
            cur++;
        }
        while(v.size()<n)
            v.push_back(v.back());
        for(ll i=0;i<n;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }


}
