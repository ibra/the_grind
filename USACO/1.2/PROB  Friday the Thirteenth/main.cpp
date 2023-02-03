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

int getDate(int days)
{
    int date = 1;

    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int currentMonth = 0;

    int currentYear = 1900;

    for (int i = 0; i < days; ++i) {
        if(isLeapYear(currentYear))
            monthDays[1] = 29;

        if(date == monthDays[currentMonth])
        {
            date = 1;
            currentMonth++;
            if(currentMonth > 11)
            {
                currentMonth = 0;
                currentYear++;
                date = 1;
                monthDays[1] = 28;
            }
            continue;
        }
        date++;
    }

    // cout << date << " -- " << currentMonth << "\n";
    return date;
}

int main()
{
    ifstream cin("friday.in");

    ofstream friday;
    friday.open("friday.out");

    int years;
    cin >> years;

    int days = getTotalDays(years);

    array<int, 7> frequencies = {};
    int currentDay = 0;

    for (int i = 0; i < days; ++i) {
       if(currentDay > 6)
           currentDay = 0;

       if(getDate(i) == 13)
           frequencies[currentDay] += 1;

        currentDay += 1;
    }

    int order[7] = {5,6,0, 1,2,3,4};

    for (int i = 0; i < frequencies.size(); i++) {
        friday << frequencies[order[i]] << " ";
    }

    friday.close();
    return 0;
}