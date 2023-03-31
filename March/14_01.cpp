#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    auto mul = [](string s, int k) -> string {
        string result = "";
        while(k--)
        {
            result +=s;
        }
        return result;
    };
    while(a--)
    {
        string s,t;
        cin>>s>>t;

        int x=s.size(),y=t.size();
        int g= __gcd(x,y);
        if(mul(s,y/g)== mul(t,x/g))
        {
            cout<<mul(s, y/g)<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }

}
