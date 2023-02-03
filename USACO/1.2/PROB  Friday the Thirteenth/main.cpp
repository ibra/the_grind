/*
ID: ibrahim54
LANG: C++
PROG: friday
 */

#include <iostream>
#include <fstream>

using namespace std;

bool isLeapYear(int currentYear)
{
    if((currentYear % 4 == 0 && currentYear % 100 != 0) || currentYear % 400 == 0)
        return true;

    return false;
}


int getTotalDays(int years)
{
    int days = 0;

    for (int i = 0; i < years; ++i) {
        if(isLeapYear(1900+i))
            days += 366;
        else
            days += 365;
    }
    return days;
}

//TODO: implement this function properly
int getDate(int days)
{
    //TODO: Feb can be both 28 and 29
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int currentDay = 0;
    for (int i = 0; i < days; ++i) {

        currentDay += 1;
    }
}

int main()
{
    // ifstream cin("friday.in");

    int years;
    cin >> years;

    int days = getTotalDays(years);

    int frequencies[6] = {};
    int currentDay = 0; //0 is Monday, 6 is Sunday

    for (int i = 0; i < days; ++i) {
       if(currentDay >= 7)
           currentDay = 0;

       if(getDate(i) == 13)
           frequencies[currentDay] += 1;

        currentDay += 1;
    }

    return 0;
}