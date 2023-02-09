#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int alice, bob;
    int n;

    cin >> n;

    while(n--) {
        int t1, t2, t3, t4;

        cin >> t1 >> t2 >> t3 >> t4;

        if (t1 == 0) {
            cout << 1 << endl;
            continue;
        }
        cout << t1 + min(t2, t3) * 2 + min(t1+1, abs(t2-t3) + t4) << endl;
    }
    return 0;
}