#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int repetitions = 1;
    long long int maxRepetitions = 1;

    string input;
    cin >> input;

    for (size_t i = 1; i < input.size(); ++i)
    {
        if (input[i] == input[i - 1])
        {
            repetitions++;
            if (repetitions > maxRepetitions)
            {
                maxRepetitions = repetitions;
            }
        }
        else
        {
            repetitions = 1;
        }
    }

    cout << maxRepetitions << endl;
    return 0;
}