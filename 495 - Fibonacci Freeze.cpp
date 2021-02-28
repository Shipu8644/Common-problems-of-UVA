#include <bits/stdc++.h>
using namespace std;

long long fib(long long n)
{
    if(n<=1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }



}


int main()
{
    long long n,n1;
    while(cin>>n)
    {
        n1=fib(n);
        cout<<"The Fibonacci number for "<<n<<" is ";
        cout<<n1<<endl;


    }




}
