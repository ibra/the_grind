#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll diag(ll num)
{
    return (num * num) - (num - 1);
}

int main()
{
    int t;
    cin >> t;

    // 1  2  9  10 25
    // 4  3  8  11 24
    // 5  6  7  12 23
    // 16 15 14 13 22

    for (int i = 0; i < t; i++)
    {
        ll x, y;
        cin >> y >> x;

        ll ans = 0;

        if (x == y)
        {
            ans = diag(x);
        }
        else if (y > x)
        {
            ans = y % 2 == 0 ? diag(y) + (y - x) : diag(y) - (y - x);
        }
        else if (x > y)
        {
            ans = x % 2 == 0 ? diag(x) - (x - y) : diag(x) + (x - y);
        }

        cout << ans << endl;
    }
}
