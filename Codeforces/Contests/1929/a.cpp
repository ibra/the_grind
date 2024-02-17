#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, a, b;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (i >= 2)
                b += a;
        }

        cout << b << endl;
    }
}