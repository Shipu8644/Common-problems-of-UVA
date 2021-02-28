#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,c1;
    while(cin>>a>>b){
            c=0;c1=0;
        while(true){
            c1=c1+a;
            if(c1>=b){
                cout<<a<<endl;
                break;
            }
            a++;
        }
    }


}
