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
        if(n%2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        map<char,ll>mp;
        ll mx=0;
        for(ll i=0; i<n; i++)
        {
            mp[s[i]]++;
            mx=max(mp[s[i]],mx);
        }
        if(mx/2>n/2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        string st="";
        bool flag=true;
        while(flag)
        {
            flag=false;
            mx=0;
            char cha;
            for(char ch='a'; ch<='z'; ch++)
            {
               if(mx<=mp[ch])
               {
                   mx=mp[ch];
                   cha=ch;
               }
            }
            if(mx)
            {
              flag=true;
               while(mx--)
                st+=cha;
                mp[cha]=0;
            }
        }
        string str="",sa="";
        for(ll i=n/2;i<n;i++)
            str+=st[i];
        reverse(str.begin(),str.end());
        for(ll i=0;i<n/2;i++)
            sa+=st[i];
        ll i=0,j=str.size()-1;
        flag=true;
        while(i<n/2 && j>=0)
        {
            if(sa[i]==str[j])
                flag=false;
            i++;j--;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            cout<<sa+str<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
}

