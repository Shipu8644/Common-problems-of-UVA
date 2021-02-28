#include <bits/stdc++.h>
using namespace std;


int main()

{

    long int n,i,mod,result;

    while(scanf("%ld",&n)==1 && n!=0)

    {

        i=1;

        while(i<=n)

        {

            i=i*2;

        }

        mod=i%n;

        result=n-mod;

        printf("%ld\n",result);

    }

}


