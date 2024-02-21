#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll r = -1;
        vector<string> sq(3);

        for (int i = 0; i < 3; ++i)
        {
            cin >> sq[i];
            if (sq[i].find("?") != string::npos)
                r = i;
        }

        ll sum = 0;
        char missing_char;

        for (int i = 0; i < 3; i++)
        {
            if (sq[r][i] != '?')
                sum += static_cast<int>(sq[r][i]);
        }

        missing_char = 'A' + 'B' + 'C' - sum;
        cout << missing_char << endl;
    }
}