#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int t,n,c,sum,r,d;
    cin>>t;
    while (t--)
    {
        cin>>n;
        d=n;
        c=0;
        while (true)
        {
            sum=0;
            while (d>0)
            {
                r=d%10;
                sum=sum*10+r;
                d=d/10;
            }
            if (n==sum)
                break;
            else
            {
                d=sum+n;
                n=sum+n;
                c++;
            }
        }
       cout<<c<<" "<<n<<endl;
    }
    return 0;
}
