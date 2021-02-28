#include <iostream>
using namespace std;
typedef long long ll;
int main() {
int t, c = 0; cin >> t;
while (t--) {
ll n; cin >> n;
ll T = (n*n-n)/2;
cout << "Case " << ++c << ": ";
if (T%2 == 0) cout << T/2 << endl;
else cout << T << "/2" << endl;
}
}
