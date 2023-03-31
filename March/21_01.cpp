#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            if(a[i]==0)
            {

                sort(a,a+i);
                ans+=a[i-1];
                a[i-1]=0;
            }

        }
        cout<<ans<<endl;
    }
}

