#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,t1=1;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        int sum=0;

        for(int i=a;i<=b;i++){
            if(i%2!=0){
                sum = sum + i;
            }
        }
        cout<<"Case "<<t1++<<": "<<sum<<endl;

    }


}
