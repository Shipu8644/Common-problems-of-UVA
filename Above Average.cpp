#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t,n,z,z1,c ,z2;
    vector<double>v;
    cin>>t;

    while(t--){
        cin>>n;
        z=0,z1=0,c=0;
        v.clear();
        for(int i=0;i<n;i++){
            double in;
            cin>>in;
            v.push_back(in);
        }
       z= accumulate(v.begin(),v.end(),0);

       z1=z/n;

       for(int i=0;i<n;i++){
        if(v[i]>z1){
            c++;
        }
       }
       z2=(c/n)*100;
      printf("%.3lf",z2);
      printf("%\n");


    }



}
