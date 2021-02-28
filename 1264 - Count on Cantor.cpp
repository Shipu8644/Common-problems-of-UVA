#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n;
while(cin>>n){
    int l=0,sum=0,i=0;

    while(++i){
        sum=sum+i;
        if(sum>=n){
            l=i;
            break;
        }
    }

    cout<<"TERM "<<n<<" IS ";
    if(l&1==1){
        cout<<1+sum-n<<"/"<<l-(sum-n)<<endl;
    }
    else{
        cout<<l-(sum-n)<<"/"<<1+sum-n<<endl;
    }

}



}
