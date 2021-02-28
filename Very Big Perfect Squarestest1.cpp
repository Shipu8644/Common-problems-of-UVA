#include<bits/stdc++.h>

using namespace std;

string s;

int main()
{
    int len,i,num_of_zero,num,ans;

    while(cin>>s)
    {
        if(s[0]=='0')
            break;

        len = s.length();

        if(len%2!=0)
        {
            num = s[0]-48;

            num_of_zero = len/2;
        }
        else
        {
            num_of_zero = (len-2)/2;

            num = (s[0]-48)*10+(s[1]-48);
        }

        ans = sqrt(num);

        cout<<ans;

        for(i=1; i<=num_of_zero; i++)
        {
            cout<<0;
        }

        cout<<endl;
    }

    return 0;
}
