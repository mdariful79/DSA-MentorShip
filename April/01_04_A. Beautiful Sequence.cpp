#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c=0;
        cin>>n;
        ll a;
        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            if(a<=i)
            {
                c=1;
            }
        }

        if(c==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}

