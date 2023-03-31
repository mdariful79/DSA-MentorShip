#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        int x = ((n-1)/4+1);
        n -= x;
        while(n--)
            cout << 9;
        while(x--)
            cout << 8;
        cout << endl;
    }
}
