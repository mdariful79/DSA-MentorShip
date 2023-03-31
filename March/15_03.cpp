#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t,ar[200005];
    cin>>t;
    while(t--)
    {
        ll n,i,c=0,ans=0;
        cin>>n;

        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
        }
        sort(ar+1,ar+n+1);
        for(i=1; i<=n; i++)
        {
            if(ar[i] > c)
            {
                c++;

            }
            ans += ar[i]-c;

        }
        cout<<ans<<endl;
    }
}
