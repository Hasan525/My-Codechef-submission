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
        vector<string>v;
        vector<pair<ll,ll> >vc;
        ll n,m;
        cin>>n>>m;
        string s;
        for(ll i=0; i<n; i++)
        {
            cin>>s;
            v.push_back(s);
            ll a=0;
            for(ll i=0;i<m;i++)
            {
                if(s[i]=='0')
                    a++;
            }

            vc.push_back(make_pair(a,i));
        }
        sort(vc.begin(),vc.end());
        string st;
        for(ll i=n-1;i>=0;i--)
        {
            st+=v[vc[i].second];
        }
       n=st.size();
       ll ans=0,cnt=0;
       for(ll i=n-1;i>=0;i--)
       {
          if(st[i]=='0')
            cnt++;
          else
          {
              ans+=cnt;
          }
       }
       cout<<ans<<endl;
    }
}
