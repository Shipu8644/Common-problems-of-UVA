#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(getline(cin, s))
    {
        if(s=="DONE")
        {
            break;
        }
        string s1= "",s2;
        for(int i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                s1+=tolower(s[i]);
            }
        }
        s2=s1;
        reverse(s1.begin(),s1.end());

        if(s1 == s2)
        {
            printf("You won't be eaten!\n");
        }
        else
        {
            printf("Uh oh..\n");
        }
    }


}
