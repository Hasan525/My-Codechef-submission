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
       ll a,b,x,y;cin>>a>>b>>x>>y;
       if(a==x && b==y)
            cout<<0<<endl;
       else if((a+b)%2==(x+y)%2)
        cout<<2<<endl;
       else
        cout<<1<<endl;
    }
}
