#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x = max((a+(b*c)),(a*(b+c)));
    int y = max((a*b*c),((a+b)*c));
    int z = max(x,y);
    int ans = max(z,(a+b+c));
    cout<<ans<<endl;

}
