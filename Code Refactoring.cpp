#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,c=0,t1=1;
    vector<int>v;
    cin>>t;

    while(t--)
    {
        cin>>n;
        v.clear();
        for(int i=2; i*i<=n; i++)
        {
            if(n%i == 0)
            {
                c++;
                v.push_back(i);
                v.push_back(n/i);
            }
            if(c==2)
            {
                break;
            }
        }
        cout<<"Case "<<"#"<<t1++<<": "<<n<<" = "<<v[0]<<" * "<<v[1]<<" = "<<v[2]<<" * "<<v[3]<<endl;
    }
}



