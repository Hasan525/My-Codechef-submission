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
        ll x,y;
        ll arr[n];
        ll cnt = 0;
        for(ll i=0; i<n; i++)cin>>arr[i];
        for(ll i=0; i<n-2; i++)
        {
            for(ll j=i+2; j<n; j++)
            {
                ll low = i, hi = j, x = (arr[i] + arr[j])/2, m = hi, mid = (low + hi)/2;
                while(low <= hi)
                {
                    mid = (low + hi)/2;
                    if(arr[mid] >= x)
                    {
                        m = min(m, mid);
                        hi = mid-1;
                    }
                    else low = mid +1;
                }
                if(arr[m] == x)cnt += ((arr[j] - arr[m])*(arr[m] - arr[i]));
                else if(m == hi)cnt += ((arr[j] - arr[j-1])*(arr[j-1] - arr[i]));
                else if(m - 1 == low)cnt += ((arr[j] - arr[m])*(arr[m] - arr[i]));
                else
                {
                     x= ((arr[j] - arr[m])*(arr[m] - arr[i]));
                     y= ((arr[j] - arr[m-1]) * (arr[m-1] - arr[i]));
                    cnt += max(x, y);
                }
            }
        }
        cout<<cnt<<endl;
    }
}
