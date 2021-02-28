#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,m,n,res=0;
    cin>>t;

    while(t--){
        cin>>m>>n;
        if(m==n){
            res=ceil(m/2.0);
            cout<<res*(res+1)/2<<endl;
        }
        else{
            cout<<(int)(ceil(m/2.0)*ceil(n/2.0))<<endl;
        }
    }


}
