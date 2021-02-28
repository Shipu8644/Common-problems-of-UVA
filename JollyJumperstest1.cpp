#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,n1;
    vector<int>v,v1;
    bool f=true;
    while(cin>>n){
        f=true;
        v.clear();
        v1.clear();
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        v.emplace_back(in);
    }
    for(int i=0;i<n-1;i++){
        n1=abs(v[i+1]-v[i]);
        v1.emplace_back(n1);
    }
    sort(v1.begin(),v1.end());

    for(int i=0;i<n-1;i++){
        if(v1[i]!=i+1){
                f=false;
        }
    }
    if(f==false){
        cout<<"Not jolly\n";
    }
    else{
        cout<<"Jolly\n";
    }

}
}
