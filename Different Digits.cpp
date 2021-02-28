#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,c,c1,i,j,n1;
    while(true){
        cin>>n>>m;
        vector<int>v;
        c1=0,c=0,i=0,j=0,n1=0;
        for(i=n;i<=m;i++){
                n=i;
              v.clear();
            while(n>0){
                n1=n%10;
                v.emplace_back(n1);
                n=n/10;
            }
            sort(v.begin(),v.end());

            for(j=0;j<v.size()-1;j++){
                if(v[j]==v[j+1]){
                    c1++;
                    break;
                }

                c1=0;
            }
            if(c1==0){
                c++;
            }

        }

        cout<<c<<endl;
    }


  return 0;
}
