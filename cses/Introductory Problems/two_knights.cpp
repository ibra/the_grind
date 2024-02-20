#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll k;
    cin >> k;

    cout << 0 << endl;
    for (ll n = 2; n <= k; n++)
    {
        ll allp = ((n * n * n * n) - (n * n)) / 2;
        ll ans = allp - (4 * (n - 2) * (n - 1)); // todo: understand removal of attacking positions

        cout << ans << endl;
    }
}
