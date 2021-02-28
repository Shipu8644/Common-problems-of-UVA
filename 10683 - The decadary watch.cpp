#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h,m,s1,c,d,ans;
    string s;

    while(cin>>s){
        h=(s[0]-'0')*10+(s[1]-'0');
        m=(s[2]-'0')*10+(s[3]-'0');
        s1=(s[4]-'0')*10+(s[5]-'0');
        c=(s[6]-'0')*10+(s[7]-'0');

        d=h*60*60*100;
        d+=m*60*100;
        d+=s1*100;
        d+=c;

        ans=(d*10000000)/8640000;

        //cout<<ans<<endl;
        printf("%07lld\n",ans);
    }


}
