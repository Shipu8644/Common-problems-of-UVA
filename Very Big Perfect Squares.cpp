#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n,c;
    vector<int>v;
    while(cin>>n){
        v.clear();
        c=0;
        if(n==0){
            break;
        }
        else{
            c=sqrt(n);
        }
        if(c<11){
            cout<<c<<endl;
        }
        else{
            while(c>0){
            c=c/10;
            v.push_back(c);
            }

            std::fill(v.begin()+1, v.end(), 0);
            for(auto x: v){
                cout<<x;
            }
            cout<<endl;
        }

    }



}
