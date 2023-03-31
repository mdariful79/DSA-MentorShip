#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int i=0;
        while(a[i+1] <= a[i] && i < n) i++;
        while(a[i+1] >= a[i] && i < n) i++;
        if(i >= n-1) cout << "YES" << endl;
        else cout << "NO" << endl;

    }


}


