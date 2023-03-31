#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c=0;
        cin>>a>>b;
        ll ans= 100000;
        for(int i=0; i<100; i++)
        {
            ll c =i;
            ll p = a ;
            while(p>0 && b+i>1)
            {
                p /=(b+i);
                c++;
            }
            if(c>0)
                ans = min(c,ans);
        }
        cout<<ans<<endl;

    }
}
