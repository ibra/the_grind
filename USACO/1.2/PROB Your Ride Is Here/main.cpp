/*
ID: ibrahim54
LANG: C++
PROG: ride
 */

#include <iostream>
#include <fstream>

using namespace std;

long long getValue(string input)
{
    long long product = 1;

    for (int i = 0; i < input.length(); i++) {
        int position = input[i] - 64;
        product *= position;
    }

    return product;
}

int main()
{
    ifstream cin("ride.in");

    string cometName, groupName;
    cin >> cometName >> groupName;

    ofstream ride;
    ride.open("ride.out");

    if(getValue(cometName) % 47 == getValue(groupName) % 47)
        ride << "GO" << endl;
    else
        ride << "STAY" << endl;

    ride.close();
    return 0;
}
