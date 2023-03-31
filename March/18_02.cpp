#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll i,n,m,sum=0;
        cin>>n>>m;
        ll a[n+m];
        for(i=0; i<n+m; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n+m-1);
        reverse(a,a+n+m);
        for(i=0; i<n; i++)
        {
           sum += a[i];

        }
        cout<<sum<<endl;

    }

}
