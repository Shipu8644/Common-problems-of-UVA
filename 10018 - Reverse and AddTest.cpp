#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="123";
    string s1="";
    s1=s;
    reverse(s.begin(),s.end());
    int s2=stoi(s);
    int s3=stoi(s1);
    int s4=s2+s3;
    cout<<s4<<endl;

    string s5= to_string(s4);
    string s6="";
    s6=s5;
    reverse(s5.begin(),s5.end());
    if(s5==s6){
        cout<<"Y"<<endl;
    }



}
