//Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s0,s1,s2,s3;
    int sum1,sum2,sh,sh1,sh2,sh3;
    double res,res1,res2;

    while(  getline(cin,s0))
    {
        getline(cin,s1);
        sum1=0,sh=0,sh1=0;
        sum2=0,sh2=0,sh3=0;
        res=0,res1=0,res2=0;
       // getline(cin,s0);
       // getline(cin,s1);
        s2.clear();
        s3.clear();




        for(int i=0; i<s0.size(); i++)
        {
            if(isalpha(s0[i]))
            {
                s2+=tolower(s0[i]);
            }
        }
        for(int j=0; j<s1.size(); j++)
        {
            if(isalpha(s1[j]))
            {
                s3+=tolower(s1[j]);
            }
        }


        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]=='a')
            {
                sum1=sum1+1;
            }
            else if(s2[i]=='b')
            {
                sum1=sum1+2;
            }
            else if(s2[i]=='c')
            {
                sum1=sum1+3;
            }
            else if(s2[i]=='d')
            {
                sum1=sum1+4;
            }
            else if(s2[i]=='e')
            {
                sum1=sum1+5;
            }
            else if(s2[i]=='f')
            {
                sum1=sum1+6;
            }
            else if(s2[i]=='g')
            {
                sum1=sum1+7;
            }
            else if(s2[i]=='h')
            {
                sum1=sum1+8;
            }
            else if(s2[i]=='i')
            {
                sum1=sum1+9;
            }
            else if(s2[i]=='j')
            {
                sum1=sum1+10;
            }
            else if(s2[i]=='k')
            {
                sum1=sum1+11;
            }
            else if(s2[i]=='l')
            {
                sum1=sum1+12;
            }
            else if(s2[i]=='m')
            {
                sum1=sum1+13;
            }
            else if(s2[i]=='n')
            {
                sum1=sum1+14;
            }
            else if(s2[i]=='o')
            {
                sum1=sum1+15;
            }
            else if(s2[i]=='p')
            {
                sum1=sum1+16;
            }
            else if(s2[i]=='q')
            {
                sum1=sum1+17;
            }
            else if(s2[i]=='r')
            {
                sum1=sum1+18;
            }
            else if(s2[i]=='s')
            {
                sum1=sum1+19;
            }
            else if(s2[i]=='t')
            {
                sum1=sum1+20;
            }
            else if(s2[i]=='u')
            {
                sum1=sum1+21;
            }
            else if(s2[i]=='v')
            {
                sum1=sum1+22;
            }
            else if(s2[i]=='w')
            {
                sum1=sum1+23;
            }
            else if(s2[i]=='x')
            {
                sum1=sum1+24;
            }
            else if(s2[i]=='y')
            {
                sum1=sum1+25;
            }
            else if(s2[i]=='z')
            {
                sum1=sum1+26;
            }

        }


        for(int i=0; i<s3.size(); i++)
        {
            if(s3[i]=='a')
            {
                sum2=sum2+1;
            }
            else if(s3[i]=='b')
            {
                sum2=sum2+2;
            }
            else if(s3[i]=='c')
            {
                sum2=sum2+3;
            }
            else if(s3[i]=='d')
            {
                sum2=sum2+4;
            }
            else if(s3[i]=='e')
            {
                sum2=sum2+5;
            }
            else if(s3[i]=='f')
            {
                sum2=sum2+6;
            }
            else if(s3[i]=='g')
            {
                sum2=sum2+7;
            }
            else if(s3[i]=='h')
            {
                sum2=sum2+8;
            }
            else if(s3[i]=='i')
            {
                sum2=sum2+9;
            }
            else if(s3[i]=='j')
            {
                sum2=sum2+10;
            }
            else if(s3[i]=='k')
            {
                sum2=sum2+11;
            }
            else if(s3[i]=='l')
            {
                sum2=sum2+12;
            }
            else if(s3[i]=='m')
            {
                sum2=sum2+13;
            }
            else if(s3[i]=='n')
            {
                sum2=sum2+14;
            }
            else if(s3[i]=='o')
            {
                sum2=sum2+15;
            }
            else if(s3[i]=='p')
            {
                sum2=sum2+16;
            }
            else if(s3[i]=='q')
            {
                sum2=sum2+17;
            }
            else if(s3[i]=='r')
            {
                sum2=sum2+18;
            }
            else if(s3[i]=='s')
            {
                sum2=sum2+19;
            }
            else if(s3[i]=='t')
            {
                sum2=sum2+20;
            }
            else if(s3[i]=='u')
            {
                sum2=sum2+21;
            }
            else if(s3[i]=='v')
            {
                sum2=sum2+22;
            }
            else if(s3[i]=='w')
            {
                sum2=sum2+23;
            }
            else if(s3[i]=='x')
            {
                sum2=sum2+24;
            }
            else if(s3[i]=='y')
            {
                sum2=sum2+25;
            }
            else if(s3[i]=='z')
            {
                sum2=sum2+26;
            }

        }


        while(sum1>=10)
        {
            sh=sum1/10;
            sh1=sum1%10;

            sum1=sh+sh1;

        }
        while(sum2>=10)
        {
            sh2=sum2/10;
            sh3=sum2%10;

            sum2=sh2+sh3;

        }


       res1=sum1;
       res2=sum2;



     if(res1>res2){
       res=(res2/res1)*100;
       printf("%.2lf",res);
       cout<<" %"<<endl;
     }
     else{
         res=(res1/res2)*100;
       printf("%.2lf",res);
       cout<<" %"<<endl;
     }


    }



}
