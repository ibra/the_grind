#include <bits/stdc++.h>

using namespace std;

int main()
{
    // todo: optimize further to learn more about problem

    int n = 0;
    cin >> n;

    long long ans = 0;
    int mn = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        mn = max(x, mn);
        ans += mn - x;
    }

    cout << ans << endl;
}