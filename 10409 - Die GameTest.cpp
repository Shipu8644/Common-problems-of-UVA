#include <bits/stdc++.h>
using namespace std;

int main()
{
    int top, bottom, east, west, north, south, temp,d;
    string s;

    while(cin>>d)
    {
        if(d==0){
            break;
        }
        top = 1;
        bottom = 6;
        north = 2;
        south = 5;
        east = 4;
        west = 3;

        while(d--)
        {
            s.clear();
            cin>>s;

            temp=top;

            if(s=="north")
            {
                top = south;
                south = bottom;
                bottom = north;
                north = temp;
            }
            else if(s=="east")
            {
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
            }
            else if(s=="south")
            {
                top = north;
                north = bottom;
                bottom = south;
                south = temp;
            }
            else
            {
                top = east;
                east = bottom;
                bottom = west;
                west = temp;
            }


        }

        cout<<top<<endl;

    }



}
