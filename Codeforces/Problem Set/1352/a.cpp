#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t, n, m;
    cin >> t;

    vector<ll> r;

    while (t--)
    {
        cin >> n;

        m = 0;
        while (n > 0)
        {
            int digit = floor(n % 10) * pow(10, m);
            if (digit != 0)
            {
                r.push_back(digit);
            }
            m++;
            n = n / 10;
        }

        cout << r.size() << endl;
        for (int i = 0; i < r.size(); ++i)
        {
            cout << r[i];
            if (i != r.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
        r.clear();
    }
}