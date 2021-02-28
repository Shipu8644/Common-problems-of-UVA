#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        int n,m,n1[10000],c,r=0,a,c1=0;
        cin>>m;
        if (m==0)
        {
            break;
        }
        else
        {
            cin>>n;
        }
        for (int i=0; i<m; i++)
        {
            cin>>n1[i];
        }
        for (int i=0; i<n; i++)
        {
            if (r>0){
                c1=1;
            }
            cin>>c>>r;
            while(c--)
            {
                cin>>a;
                for (int i=0; i<m; i++)
                {
                    if (n1[i]==a)
                    {
                        r--;

                    }
                }

            }


        }

        if (c1==1)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }


    }
}







