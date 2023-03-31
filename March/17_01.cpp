#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,x_s=0,y,y_s=0,z_s=0,z;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y>>z;
        x_s += x;
        y_s += y;
        z_s += z;

    }
    if(x_s== 0 && y_s==0 && z_s==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
