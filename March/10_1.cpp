#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int num1 = 1;

        for(int i=2; i*i<= n; i++)
        {
            if(n%i == 0)
            {
                num1 = n/i;
                break;
            }

        }
        cout<< num1 <<" "<< n-num1 <<endl;
    }
    return 0;
}
