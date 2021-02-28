#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t,n,n1;
    cin>>t;
    cout<<"\n";
    while(t--){
      cin>>n;
      if(n>1){
      n1=n*n+((sqrt(2))-1)*((n-2)*(n-2));
      printf("%.3lf\n",n1);
    }
    else{
        cout<<"0.000"<<endl;
    }

   cout<<"\n";
}
}
