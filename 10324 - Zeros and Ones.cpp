#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int t1=0,t;
    while (cin>>s && cin>>t)
    {

        cout<<"Case "<<++t1<<":"<<endl;
        int a,b,c;
        while(t--)
        {
            c=0;
            cin>>a>>b;
            if(a>b)
            {
                swap(a,b);
            }
            for(int i=a; i<b; i++)
            {
                if(s[i]!=s[i+1])
                {
                    c=1;
                    break;
                }

            }
            if(c==1)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }

        }

    }

}
