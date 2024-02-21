#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll t, sum;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        sum = 0;

        for (ll i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }

        ll sr = sqrt(sum);

        if (sr * sr == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}