#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n;i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2; // input xy coordinate
        int pos1, pos2;
        pos1 = (1+x1+y1)*(x1+y1)/2+x1; // (0,0) -> (x1, y1) = (1+2+3+...+(x1+y1))+x1
        pos2 = (1+x2+y2)*(x2+y2)/2+x2;
        // Output
        cout << "Case "<< i+1 << ": "<< pos2 - pos1 << endl;
    }
    return 0;
}
