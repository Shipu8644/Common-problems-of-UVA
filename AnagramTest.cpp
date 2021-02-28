#include <bits/stdc++.h>
using namespace std;

bool comparator(char a, char b){
	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}

int main() {
	string word;
	int n;

	cin >> n;
	getchar();
	while(n--){
		//cin.ignore();
		cin >> word;

		sort(word.begin(),word.end(),comparator);
		cout << word << endl;
		while(next_permutation(word.begin(),word.end(),comparator)){
			cout << word << endl;
		}

	}

	return 0;
}
