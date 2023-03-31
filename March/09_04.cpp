#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]<= 1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if(ar[i]>= 1400 && ar[i]<= 1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if(ar[i]>= 1600 && ar[i]<= 1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(ar[i]>= 1900)
        {
            cout<<"Division 1"<<endl;
        }
    }

}
