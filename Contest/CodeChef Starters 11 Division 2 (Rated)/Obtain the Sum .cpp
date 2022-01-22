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
       ll n,x;cin>>n>>x;
       ll sum=(n*(n+1))/2;
       ll cnt=sum-x;
       if(cnt<=n && cnt>=1)
        cout<<cnt<<endl;
       else
        cout<<-1<<endl;
    }

}
