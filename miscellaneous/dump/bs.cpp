#include <bits/stdc++.h>

using namespace std;

int search(int x, vector<int> array, int a, int b)
{
    int k = (a + b) / 2;

    if (array[k] == x)
        return k;

    else if (array[k] > x)
    {
        b = k - 1; // high <- k - 1
        return search(x, array, a, b);
    }
    else
    {
        a = k + 1; // low <- k + 1
        return search(x, array, a, b);
    }
    return -1;
}

int main()
{
    int x, n;
    cin >> x >> n;

    vector<int> array(n);
    std::iota(array.begin(), array.end(), 1);

    int pos = search(x, array, 0, n - 1);
    cout << "found x at pos: " << pos << endl;
}