#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p,q,r,s,t,x=9;

        if(n<10)
        {
            cout<<n<<endl;
        }
        else if(n>=10 && n<100)
        {
            p = x+(n/10);

            cout<<p<<endl;
        }
        else if(n>=100 && n<1000)
        {
            q = (2*x)+(n/100);
            cout<<q<<endl;
        }
        else if(n>=1000 && n<10000)
        {
            r = (3*x)+(n/1000);
            cout<<r<<endl;
        }
        else if(n>=10000 && n<100000)
        {
            s= (4*x)+(n/10000);
            cout<<s<<endl;
        }
        else if(n>=100000 && n<1000000)
        {
            t= (5*x)+(n/100000);
            cout<<t<<endl;
        }

    }
    return 0;
}

