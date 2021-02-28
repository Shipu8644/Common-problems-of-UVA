#include <bits/stdc++.h>

using namespace std;

const int c = 64;

const char d = '/';

using namespace std;

int main()
{

    int n[128];
    n['W'] = 64;
    n['H'] = 32;
    n['Q'] = 16;
    n['E'] = 8;
    n['S'] = 4;
    n['T'] = 2;
    n['X'] = 1;

    string s;
    while (cin >> s, s != "*")
    {
        int c1 = 0, c2 = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == d)
            {
                if (c2 == c)
                    c1++;
                c2 = 0;
            }

            else
            {
                c2 += n[s[i]];
            }
        }

        cout << c1 << '\n';
    }
}
