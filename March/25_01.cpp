#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        for (int i=1; i<=n; i++)
        {
            cout<<min(1+i*(i - 1)/2,k-n+i)<<" ";
        }

        cout<<endl;
    }

}
