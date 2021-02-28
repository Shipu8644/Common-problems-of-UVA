#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,in,d;
    vector<int>v;
    set<int>v2;
    while(scanf("%d %d",&n,&b)==2)
    {
        v.clear();
        v2.clear();

        if(n==0 && b==0)
        {
            break;
        }
        else
        {
            for(int i=0; i<b; i++)
            {
                cin>>in;
                v.emplace_back(in);
            }

            for(int a=0;a<v.size();a++){
                for(int c=0;c<v.size();c++){
                    d= abs(v[a]-v[c]);
                    v2.insert(d);
                }
            }

            if(v2.size()==(n+1)){
                cout<<"Y"<<endl;
            }
            else{
                cout<<"N"<<endl;
            }



        }
    }
}




