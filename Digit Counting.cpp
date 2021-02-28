#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>v;

    while(t--){
            int n;
            cin>>n;
            v.clear();
            for(int i=1;i<=n;i++){
                int f=i;
                while(f>0){
                    int n1=f%10;
                    v.emplace_back(n1);
                    f=f/10;
                }
            }
            sort(v.begin(),v.end());

            for(int j=0;j<10;j++){

              cout <<count(v.begin(),v.end(),j);
              if(j < 9)cout << " ";
            }

          cout <<endl;
    }

}
