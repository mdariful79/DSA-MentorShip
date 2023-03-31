#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    cout<<ceil(hypot(x-x1,y-y1)/(2*r));

    return 0;
}
