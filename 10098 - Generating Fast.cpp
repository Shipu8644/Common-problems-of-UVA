#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>s;
        sort(s.begin(),s.end());

        do
        {
            cout<<s<<endl;
        }
        while(next_permutation(s.begin(),s.end()));

        cout<<endl;
    }

}
