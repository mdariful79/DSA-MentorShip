#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[200005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll i,n,c=0,ans=3;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
            c = __gcd(c,ar[i]);
        }

        if(c==1)
            ans=0;
        for(i=1; i<=n; i++)
            if(__gcd(i,c)==1)

                ans = min(ans,n-i+1);
        cout<<ans<<endl;
    }


}
