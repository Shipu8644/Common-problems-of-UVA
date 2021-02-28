#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        double x,y,z;
        cin>>x>>y>>z;
        double z1=(z/(x+y))*x;
        double z2=(x-y)*(z/(x+y));
        cout<<z1+z2<<endl;

    }


}
