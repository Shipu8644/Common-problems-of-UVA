#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    long long  c,c1;

    while(cin>>n){
            int n1=stoi(n);
            c=0,c1=0;
        if(n1%4==0 && n1%100!=0 || n1%400==0){
            c=1;
            c1=1;
           cout<<"This is leap year."<<endl;
        }
        if(n1%15==0){
            c=1;
            cout<<"This is huluculu festival year."<<endl;
        }
        if( n1%55==0 && c1==1){
            c=1;
              cout<<"This is bulukulu festival year."<<endl;
        }
       if(c==0){
        cout<<"This is an ordinary year."<<endl;
       }

    }



}
