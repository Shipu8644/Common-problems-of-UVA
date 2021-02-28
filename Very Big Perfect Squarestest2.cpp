#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int l,i,n,n1,ans;

    while(cin>>s){
        if(s[0]=='0'){
            break;
        }
        l=s.length();

        if(l%2==0){
            n=(s[0]-48)*10+(s[1]-48);
            n1=(l-2)/2;
        }
        else{
            n=s[0]-48;
            n1=l/2;
        }
        ans=sqrt(n);
        cout<<ans;

        for(int i=1;i<=n1;i++){
            cout<<0;
        }
        cout<<endl;

    }


}
