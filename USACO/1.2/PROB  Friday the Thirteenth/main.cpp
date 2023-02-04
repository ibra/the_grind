/*
ID: ibrahim54
LANG: C++
PROG: friday
 */

#include <iostream>
#include <fstream>
#include <array>

using namespace std;

bool isLeapYear(int currentYear)
{
    if((currentYear % 4 == 0 && currentYear % 100 != 0) || currentYear % 400 == 0)
    {
        return true;
    }

    return false;
}

int main()
{
    ofstream friday;
    friday.open("friday.out");

    int years;
    cin >> years;

    int curDay = 0;
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    array<int, 7> frequencies = {};

    for (int year = 1900; year < 1900 + years; ++year) {
        for (int month = 0; month < 12; ++month) {
            monthDays[1] = isLeapYear(year) ? 29 : 28;
            int day = (curDay + 12) % 7;
            
            frequencies[day]++;
            curDay += monthDays[month];
        }
    }

    int order[7] = {5,6,0, 1,2,3,4};

    for (int i = 0; i < frequencies.size(); i++) {
        if(i == frequencies.size() - 1)
        {
            friday << frequencies[order[i]] << endl;
            continue;
        }
        friday << frequencies[order[i]] << " ";
    }

    friday.close();
    return 0;
}