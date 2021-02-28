#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int tc=1;
    while(t--)
    {
        string s;
        int a;
        cin>>a;
        getline(cin,s);
        int b;
        if(s.length()>3)  b=s[3]-'0';
        else b=0;
        cout<<a<<b<<endl;
        cout<<"Case "<<tc++<<": "<<a*0.5+0.05*b<<endl;
    }
}

