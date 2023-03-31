#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n+1];
        a[0]=0;
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
            a[i]+=a[i-1];
        }
        for(ll i=0; i<q; i++)
        {
            ll l,r,x;
            cin>>l>>r>>x;
            ll ans=(a[n]-(a[r]-a[l-1]))+(r-l+1)*x;
            if(ans&1) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
}
