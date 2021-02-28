#include <bits/stdc++.h>
using namespace std;


long long fib(long long n)
{
   if ( n <= 1 )
      return n;
   return fib(n-1) + fib(n-2);
}

int main()
{
    long long n,n1;
    while(cin>>n){
    if(n==0){
        break;
    }
    n1=fib(n+1);
    cout<<n1<<endl;

    }
}
