#include <bits/stdc++.h>

using namespace std;

long long int getZeros(long long int number)
{
    int count = 0;

    for (int i = 5; number / i > 0; i *= 5)
    {
        count += number / i;
    }

    return count;
}

int main()
{
    long long int n;
    cin >> n;

    cout << getZeros(n) << endl;
}