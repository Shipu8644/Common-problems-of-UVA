#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,c,c1,i;
    while(cin>>n){
     c=0,c1=0;

    if(n>1 and n<=9)
    {
        cout<<"Stan wins."<<endl;
    }
    else if(n==0 || n==1){
         cout<<"Ollie wins."<<endl;
    }
    else{
        for( i=9;i<n;){
            c++;
            if(c%2!=0){
                c1=1;
                i=i*2;
            }
            else{
                c1=2;
                i=i*9;
            }
        }
        if(c1==1){
            cout<<"Ollie wins."<<endl;
        }
        else{
            cout<<"Stan wins."<<endl;
        }
    }

    }
}
