#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ar[2000005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c,d=0;
        cin>>n>>c;

        for(ll i=1; i<=n; i++)
        {
            ll x;
            cin>>x;
            ar[i] = x+i;
        }
        sort(ar+1,ar+n+1);
		for(int i=1; c>=ar[i]&&i<=n; i++)
		{
			d++;
			c-=ar[i];
		}
		cout<<d<<endl;

    }
    return 0;
}
 
