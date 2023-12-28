#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    int a, b;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if ((a + b) % 3 != 0 || b > 2 * a || a > 2 * b)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}