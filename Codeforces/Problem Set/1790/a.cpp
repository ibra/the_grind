#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--) {
        string guess;
        cin >> guess;

        const string digits = "314159265358979323846264338327";

        if(digits == guess)
        {
            cout << digits.length() << endl;
            break;
        }

        for (int i = 0; i < digits.length(); ++i) {
            if(digits[i] != guess[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
}
