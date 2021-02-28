#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, Case = 0;
    cin>>t;
    while(t--) {
        cin>>n;
        printf("Case #%d: %d", ++Case, n);
        int i, cnt = 0;
        for(i = 2; cnt < 2; i++) {
            if(n%i == 0) {
                printf(" = %d * %d", i, n/i);
                cnt++;
            }
        }
        puts("");
    }
    return 0;


}
