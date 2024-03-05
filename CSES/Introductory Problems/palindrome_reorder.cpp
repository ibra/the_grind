#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string in;
    getline(cin, in);

    int checks = 0;
    bool even = in.length() % 2 == 0;

    std::unordered_map<char, int> charCounts;
    string pal, hinge;

    for (char c : in)
    {
        charCounts[c]++;
    }

    for (const auto &pair : charCounts)
    {
        if (pair.second % 2 != 0)
        {
            checks++;
        }
    }

    if ((!even && checks > 1) || (even && checks > 0))
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    // IF POSSIBLE
    for (const auto &pair : charCounts)
    {
        if (even)
        {
            pal.append(pair.second / 2, pair.first);
            string prepend(pair.second / 2, pair.first);
            pal = prepend + pal;
        }
        else
        {
            if (pair.second % 2 != 0)
            {
                hinge.append(pair.second, pair.first);
                continue;
            }
            pal.append(pair.second / 2, pair.first);
            string prepend(pair.second / 2, pair.first);
            pal = prepend + pal;
        }
    }

    if (!even)
    {
        pal.insert(pal.length() / 2, hinge);
    }

    cout << pal << endl;
}