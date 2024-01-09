#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    for (int i = 0; i < 1 << n; i++)
    {
        cout << std::string(n, '0') << endl;
    }
}