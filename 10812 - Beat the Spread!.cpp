#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,a,b,s,d;
    cin>>n;

    while(n--)
    {
        cin>>s>>d;

        a=(s+d)/2;
        b=s-a;

        if(a>=0 && b>=0){
        if(a+b==s && abs(a-b)==d)
        {

            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<"impossible"<<endl;
        }
        }
        else{
            cout<<"impossible"<<endl;
        }

    }

}
