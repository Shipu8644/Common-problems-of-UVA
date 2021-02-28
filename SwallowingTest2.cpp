#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,flag=0,dy,y1,y2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag=0;
        cin>>y1>>y2;
        dy=y1-y2;
        n=n-1;
        while(n--)
        {
            cin>>y1>>y2;
            {
                if(dy!=y1-y2)
                    flag=1;
            }
        }
        if(flag==0)
            cout<<"yes\n";

        else
           cout<<"no\n";
        if(t)
           cout<<"\n";
    }
    return 0;
}

