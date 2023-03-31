#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[n],c=0,d=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(n==2 && a[0]!=a[1])
    {
        cout<<"YES\n";
        cout<<a[0]<<" "<<a[1];
    }
    else if(n==2 && a[0]==a[1])
    {
        cout<<"NO\n";
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(a[i] == a[0])
            {
                c++;
            }
            if(a[i] == a[(n/2)+1])
            {
                d++;
            }
        }

        if(c+d == n && c==d)
        {
            cout<<"YES\n";
            cout<<a[0]<<" "<<a[(n/2)+1];
        }
        else
        {
            cout<<"NO\n";
        }


    }

    return 0;
}
