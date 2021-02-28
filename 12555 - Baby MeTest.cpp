#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int t,a,b,tc=0;
    cin>>t;

    while(t--){
        int a;
        cin>>a;
        getline(cin,s);
        int l=s.length();
        if(l>3){
            b=s[3]-'0';
        }
        else{
            b=0;
        }
        cout<<"Case "<<++tc<<": "<<a*0.5+0.05*b<<endl;
    }

}
