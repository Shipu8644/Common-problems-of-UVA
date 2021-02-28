#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,n1;

    while(cin>>n>>k){
        n1=n;
        while(n>=k){
            n1=n1+n/k;
            n=n/k+n%k;
        }
        cout<<n1<<endl;
    }



}

