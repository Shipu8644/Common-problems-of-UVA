#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a='Z',b='a';
    if(tolower(a)<tolower(b)){
        cout<<1<<endl;
    }
    else if(tolower(a)==tolower(b)){
        cout<<"="<<endl;
    }
    else{
        cout<<2<<endl;
    }



}
