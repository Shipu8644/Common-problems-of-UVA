#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1,s5,s6;
    int t,s2,s3,s4,c,c1;
    cin>>t;
    getchar();
    while(t--)
    {
        c1=0;c=1;
        cin>>s;
        while(c1!=1){
        s1="";
        s1=s;
        reverse(s.begin(),s.end());
         s2= std::stoi(s);
         s3= std::stoi(s1);
         s4=s2+s3;
        s5= to_string(s4);
        s6="";
        s6=s5;
        reverse(s5.begin(),s5.end());
        if(s5==s6){
            c1=1;
            cout<<c<<" "<<s5<<endl;
        }
        else{
            c++;
            s=s6;
        }
    }
}
}
