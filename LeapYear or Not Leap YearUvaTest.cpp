
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long h, m4, m100, m400, m15, m55, i, Len, leap;
    char A[1000000];
    int p = 0;

    while (cin >> A){

        if ( p != 0 )
            printf("\n");
        p = 1;

        leap = h = m4 = m100 = m400 = m15 = m55 = 0;

        Len =strlen(A);

        for (i=0; i< Len; i++) {

            m4 = ((m4 * 10) + (A[i]-'0')) % 4;
            m100 = ((m100 * 10) + (A[i]-'0')) % 100;
            m400 = ((m400 * 10) + (A[i]-'0')) % 400;
            m15 = ((m15 * 10) + (A[i]-'0')) % 15;
            m55 = ((m55 * 10) + (A[i]-'0')) % 55;
        }

        if ((m4==0 && m100!=0) || m400==0){
            printf("This is leap year.\n");
            leap = 1;
            h = 1;
        }

        if (m15==0){
            printf("This is huluculu festival year.\n");
            h = 1;
        }

        if (leap==1 && m55==0)
            printf("This is bulukulu festival year.\n");

        if (h==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
