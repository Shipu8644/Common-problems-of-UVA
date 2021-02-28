#include <bits/stdc++.h>

using namespace std;

bool comparator(char a, char b){
	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}

int main()
{
    string s;
    int t;
    cin>>t;
    getchar();
    while(t--){
        cin>>s;
        sort(s.begin(),s.end(),comparator);

        do{
            cout<<s<<endl;
        }
        while(next_permutation(s.begin(),s.end(),comparator));

    }

}
