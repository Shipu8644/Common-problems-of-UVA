#include <bits/stdc++.h>
using namespace std;

int main(){
   while(true){
    int a,b,c,d,l,c1,res;

    cin>>a>>b>>c>>d>>l;
    if(a==0 && b==0 && c==0 && d==0 && l==0){
        break;
    }
    c1=0;
    for(int i=0;i<=l;i++){
        res = a*i*i + b * i + c;
        if(res%d==0){
            c1++;
        }
        res=0;
    }
    cout<<c1<<endl;
   }
}

