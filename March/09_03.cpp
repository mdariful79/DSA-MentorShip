#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=-1;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];

        }
        sort(ar,ar+n);
        for(int i=0; i<n-2; i++)
        {
            if(ar[i] == ar[i+1] && ar[i]==ar[i+2])
            {
                p = ar[i];
                break;
            }

        }

        cout<<p<<endl;
    }

}
