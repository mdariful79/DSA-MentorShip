#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,min = INT_MAX,x=0;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
            {
                cin>>ar[i];
                if(min>ar[i])
                {
                    min = ar[i];
                    x=i;
                }
            }
            if(n%2 || x%2)
                {
                    cout<<"Mike"<<endl;
                }
                else
                {
                    cout<<"Joe"<<endl;
                }
    }
    return 0;
}
