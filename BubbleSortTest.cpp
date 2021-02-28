#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=(n*n-n)/2;
        cout<<"Case "<<++c<<": ";
        if(ans%2==0){
            cout<<ans/2<<endl;
        }
        else{
            cout<<ans<<"/2"<<endl;
        }

    }


}
