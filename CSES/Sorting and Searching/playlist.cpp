#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    set<int> s;

    ll n, ans = 0;
    cin >> n;

    ll k, cur = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> k;

        cur++;

        if (s.count(k))
        {
            ans = max(ans, cur);
            cur = 0;
        }

        s.insert(k);
    }

    ans = max(ans, cur);
    cout << ans << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();

    return 0;
}
