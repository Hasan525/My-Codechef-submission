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
        ll n,k;
        cin>>n>>k;
        ll x;
        vector<pair<ll,ll> >v;
        vector<pair<ll,ll> >ans;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(make_pair(x,i));
        }
        ll cnt,res;
        sort(v.begin(),v.end());
        if(k%2)
        {
             cnt=n-k;
             res=k/2;
            cout<<v[cnt+res].first<<endl;
        }
        else
        {
             cnt=n-k;
             res=k/2;
            cout<<v[cnt+res-1].first<<endl;
        }
        for(ll i=cnt;i<n;i++)
            ans.push_back(make_pair(v[i].second,v[i].first));
        sort(ans.begin(),ans.end());
        for(ll i=0;i<k;i++)
            cout<<ans[i].second<<" ";
        cout<<endl;


    }

}
