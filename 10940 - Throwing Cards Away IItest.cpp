#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x,x1,x2;
    while(cin>>n){
        x=0,x1=0,x2=0;
    if(n==0){
        break;
    }
    while(pow(2,x)<=n){
        x++;
    }
    x1=x-1;
    x2=pow(2,x1);
    if(x2==n){
        cout<<n<<endl;
    }
    else{
        cout<<(n-x2)*2<<endl;
    }
    }

}
