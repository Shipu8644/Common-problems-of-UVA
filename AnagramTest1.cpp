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
    cin>>s;

    sort(s.begin(),s.end(),comparator);
    cout<<s<<endl;

}
