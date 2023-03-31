#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        cout<<abs(x-y)*a+min(x,y)*min(2*a,b)<<endl;

    }
}
