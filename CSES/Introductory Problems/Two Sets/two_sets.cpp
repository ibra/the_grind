#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    ll sum = n * (n + 1) / 2;

    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    vector<ll> a, b;

    if (n % 2 == 0)
    {
        for (ll i = 0; i < n / 2; i++)
        {
            if (i % 2 == 0)
            {
                a.push_back(i + 1LL);
                a.push_back(n - i);
            }
            else
            {
                b.push_back(i + 1LL);
                b.push_back(n - i);
            }
        }
    }
    else
    {
        for (ll i = 0; i < (n - 1) / 2; i++)
        {
            if (i % 2 == 0)
            {
                a.push_back(i + 1LL);
                a.push_back(n - i - 1);
            }
            else
            {
                b.push_back(i + 1LL);
                b.push_back(n - i - 1);
            }
        }

        if (a.size() > b.size())
        {
            b.push_back(n);
        }
        else
        {
            a.push_back(n);
        }
    }

    cout << a.size() << endl;
    for_each(a.begin(), a.end(), [](ll x)
             { std::cout << x << " "; });

    cout << endl;

    cout << b.size() << endl;
    for_each(b.begin(), b.end(), [](ll x)
             { std::cout << x << " "; });
}