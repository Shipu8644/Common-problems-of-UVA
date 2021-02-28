#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,t1=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int l=v.size();

       cout<<"Case "<<t1++<<": "<<v[l/2]<<endl;


    }

}
