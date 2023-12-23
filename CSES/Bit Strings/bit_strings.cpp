#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1000000007;

ll power(ll base, ll exponent, ll mod)
{
    ll result = 1;
    base = base % mod;

    if (mod == 1)
    {
        return 0;
    }

    for (int i = 0; i < exponent; i++)
    {
        result = (result * base) % mod;
    }
    return result;
}

int main()
{
    ll n;
    cin >> n;

    cout << power(2, n, MOD) << endl;
}
