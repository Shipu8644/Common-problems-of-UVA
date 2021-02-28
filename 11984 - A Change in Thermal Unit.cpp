#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,t1=0;
    float c,f,c1,f1,f2;
    cin>>t;
    while(t--)
    {
        cin>>c>>f;
        int a = 9, b = 5;
        f2= (float)a/b;
        f1 = (f2*c) + 32 + f;
        c1= ((5*f1)-160)/9;
        cout<<"Case "<<++t1<<":"<<" ";
        printf("%.2f\n",c1);
    }

}
