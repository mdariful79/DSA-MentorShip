#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,amax=0,bmax=0;
        cin >> n;

        int a[n], b[n];
        for (int i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for (int i=1; i<=n; i++)
        {
            cin >> b[i];
        }

        for (int i=1; i<=n; i++)
        {
            if (a[i]>b[i])
            {
                swap(a[i],b[i]);
            }
            amax= max(amax,a[i]),bmax=max(bmax,b[i]);

        }

        if (a[n]>=amax && b[n]>=bmax)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

