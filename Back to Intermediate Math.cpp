#include <bits/stdc++.h>

using namespace std;

int main()
{
    double t1,t2,d,u,v,t3;
    int t,c=0;
    cin>>t;

    while(t--)
    {
        cin>>d>>v>>u;
        c=c+1;

        if(u<=v){
            cout<<"Case "<<c<<": "<<"can't determine\n";
        }
        else{
            t1=d/u;
            t2=(d/(sqrt(u*u-v*v)));

            t3=t2-t1;

            if(t3<=0){
                cout<<"Case "<<c<<": "<<"can't determine\n";
            }
            else{
                cout<<"Case "<<c<<": ";
                printf("%.3lf\n",t3);
                }
            }

        }

    }




