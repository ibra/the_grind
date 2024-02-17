#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if (b == c)
        {
            cout << a << endl;
        }
        else if (a == c)
        {
            cout << b << endl;
        }
        else if (a == b)
        {
            cout << c << endl;
        }
    }
}