#include <bits/stdc++.h>
using namespace std;
int n,k,i=1;
int main()
{
    while (1){

    cin>>n>>k;
    if(n==0 and k==0){
        break;
    }

    else if(((26*k)+k)<n){
        cout<<"Case "<<i<<": "<< "impossible"<<endl;

    }

    else if (n%k == 0){
        cout<<"Case "<<i<<": "<<(n/k)-1<<endl;
    }
    else if(n%k !=0){
        cout<<"Case "<<i<<": "<<(n/k)<<endl;
    }
   i++;
    }

}
