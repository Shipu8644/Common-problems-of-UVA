#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,e,f,c,res;
    cin>>t;
    while(t--){
        cin>>e>>f>>c;
        res = 0;
        int k = e+f;
        while(k>=c){
            res = res + k/c;
            k = k%c + k/c;
        }
        cout<<res<<endl;
    }


}
