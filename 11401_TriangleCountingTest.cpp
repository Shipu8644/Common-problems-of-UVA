#include <bits/stdc++.h>
using namespace std;

long long F[1000007], P[1000007];

void precal()
{
    F[3] = 0; P[3] = 0;
    long long var = 0;
    for(int i=4; i<=1000000; i++)
    {
        if(i%2==0)
        {
            var++;
            P[i] = P[i-1] + var;
            F[i] = F[i-1] + P[i];
        }
        else
        {
            P[i] = P[i-1] + var;
            F[i] = F[i-1] + P[i];
        }
    }
}

int main()
{
    precal();
    int n;
    while(scanf("%d", &n) && n>=3)
    {
        printf("%lld\n", F[n]);
    }
}
