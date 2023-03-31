#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll k,ans=0;
    cin>>k;
    ll a[20005];
    for(int i=0; i<26; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<s.size(); i++)
    {
        ans +=a[s[i]-'a']*(i+1);
    }
    sort(a,a+26);
    for(int i=1; i<=k; i++)
    {
        ans +=(s.size()+i)*a[25];
    }
    cout<<ans<<endl;

    return 0;
}
