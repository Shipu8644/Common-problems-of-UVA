#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h1,m1,h2,m2,a,b,c,d,f;

    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {

        a=0,b=0,c=0,d=0,f=0;
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        else if((h1<=h2 && m1<=m2) ||(h1<h2 && m1>m2))
        {
            a=(h1*60)+m1;
            b=(h2*60)+m2;
            cout<<b-a<<endl;
        }
        else if(h1>=h2 && m1>m2)
        {
            d=abs(h1-h2);
            c=24-d;
            f=c*60-abs(m1-m2);
            cout<<f<<endl;
        }
        else if(h1>=h2 && m1<m2)
        {
            d=abs(h1-h2);
            c=24-d;
            f=c*60+abs(m1-m2);
            cout<<f<<endl;

        }


    }

}
