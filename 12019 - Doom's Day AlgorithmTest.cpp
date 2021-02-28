#include <bits/stdc++.h>
using namespace std;


int main()
{
    char s[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday","Thursday", "Friday", "Saturday"};

    int total[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

    int n, m, d;
    cin>>n;
        while (n --)
        {
            cin>>m>>d;
            cout<<(s[(total[m-1]+d+5)%7])<<endl;
        }
    return 0;
}
