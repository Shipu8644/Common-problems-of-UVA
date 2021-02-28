#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n1,n2,c,n3,c1;
    while(cin>>a>>b)
    {
        if (a==0 && b==0)
        {
            break;
        }
        c=0;
        c1=0;
        while(a>0 || b>0)
        {
            n1=0,n2=0,n3=0;
            n1=a%10;

            n2=b%10;
            a=a/10;
            b=b/10;
            n3=n1+n2+c1;
            if(n3>9)
            {
                c1=1;
                c++;
            }
            if(n3<=9)
            {
                c1=0;
            }

        }
        if(c==0)
        {
            cout<<"No carry operation."<<endl;
        }
        else if(c==1)
        {
            cout<<c<<" carry operation."<<endl;
        }
         else if(c>1)
        {
            cout<<c<<" carry operations."<<endl;
        }



    }
}
