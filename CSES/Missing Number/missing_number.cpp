#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int expectedSum = n * (n + 1) / 2;
    long long int actualSum = 0;

    for (int i = 1; i < n; i++)
    {
        long long int num;
        while (cin >> num)
        {
            actualSum += num;
        }
    }

    cout << expectedSum - actualSum << endl;
    return 0;
}