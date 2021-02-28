#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cout << "Enter Name: ";
        cin >> name;

        cout << "Press Enter: ";
        if (cin.get() == '\n') {
            cout << "ENTER WAS PRESSED" << endl;
        }

       cout<<"Enter Back Quote: ";
       if(cin.get() == '\''){
           cout<<"Back quote pressed"<<endl;
       }
       else{
        cout<<"Back quote is not pressed"<<endl;
       }

}
