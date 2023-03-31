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
        int a[n];
        int sum=0;
        int x=1;
        while(k-x>0)
        {
            k-=x;
            x++;
        }
        for(int i=0; i<x-1; i++)
        {
            cout<<10<<" ";
        }
        cout<<-10*(x-k)+1<<" ";
        for(int i=x; i<n; i++)
        {
            cout<<-1000<<" ";
        }
        cout<<endl;
    }
}
