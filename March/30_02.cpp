#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n][5],z=0,f=0,d=0,y=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<5; j++)
                cin>>a[i][j];
        for(int i=0; i<5; i++)
        {
            for(int j=i+1; j<5; j++)
            {
                z=0,d=0,y=0;
                for(int k=0; k<n; k++)
                {
                    z+=(!a[k][i]&&!a[k][j]);
                    d+=(a[k][i]>0);
                    y+=(a[k][j]>0);
                }
                f+=(d>=n/2&&y>=n/2&&!z);
            }
        }
        cout<<(f>0?"YES\n":"NO\n");
    }

    return 0;
}
