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

    // 1  2  9  10 25  (o,o) (e,o) (o,o) (e,o) (o,o)
    // 4  3  8  11 24  (o,e) (e,e) (o,e) (e,e) (o,e)
    // 5  6  7  12 23  (o,o) (e,o) (o,o) (e,o) (o,o)
    // 16 15 14 13 22  (o,e) (e,e) (o,e) (e,e) (o,e)

    for (int i = 0; i < t; i++)
    {
        ll x, y;
        cin >> x >> y;

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
        }

        cout << ans << endl;
    }
}
