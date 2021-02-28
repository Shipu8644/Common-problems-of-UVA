#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int t,t1=0;
    cin>>t;
    getchar();

    while(t--)
    {
        getline(cin, s);
        string s1= "",s2;
        for(int i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                s1+=tolower(s[i]);
            }
        }
            s2=s1;
            int l=s1.size();
            reverse(s1.begin(),s1.end());

            if(s1==s2 && sqrt(l)==(int)sqrt(l))
            {
                cout<<"Case "<<"#"<<++t1<<":"<<endl;
                cout<<sqrt(l)<<endl;
            }
            else
            {
                cout<<"Case "<<"#"<<++t1<<":"<<endl;
                cout<<"No magic :(\n";
            }

        }

}
