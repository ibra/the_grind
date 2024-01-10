#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        ll coefficient = 1;

        for (int j = 0; j <= i; j++)
        {
            cout << " " << coefficient;
            coefficient = coefficient * (i - j) / (j + 1);
        }

        cout << endl;
    }
}
