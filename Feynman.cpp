#include<bits/stdc++.h>
using namespace std;
int sum,n;
int main(){
while(cin>>n){
    if (n==0){
        break;
    }
    sum=0;
 for(int i=1;i<=n;i++){
    sum=sum+i*i;
 }
 cout<<sum<<endl;

}
}
