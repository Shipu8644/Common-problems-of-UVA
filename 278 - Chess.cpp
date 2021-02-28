#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,y,s;
    char c;
    cin>>t;
    getchar();
    while(t--){
        s=0;
        cin>>c>>x>>y;

        if(c=='r'){
            s=min(x,y);
        }
       else if(c=='Q'){
            s=min(x,y);
       }
        else if(c=='K'){
           s=((x+1)/2)*((y+1)/2);
       }
       else{
        s=(x*y+1)/2;
       }
       cout<<s<<endl;


    }



}
