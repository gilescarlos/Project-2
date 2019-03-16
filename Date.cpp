//
// Created by Giles Pierre Carlos on 2019-03-16.
//

#include <iostream>
#include <string>

using namespace std;

#include "Date.h"

Date::Date() {
    setMonth(1);
    setDay(1);
    setYear(2019);
    setDaysInMonth();
}

Date::Date(int mth, int dy, int yr) {
    setMonth(mth);
    setDay(dy);
    setYear(yr);
    setDaysInMonth();
}

void Date::setMonth(int newMonth) { month = newMonth; }
void Date::setDay(int newDay) { day = newDay; }
void Date::setYear(int newYear) { year = newYear; }

int Date::getMonth() const { return month; }
int Date::getDay() const { return day; }
int Date::getYear() const { return year; }

string Date::printMonth(int m) {
    string monthNames[12] = { "January", "February", "March", "April",
                              "May", "June", "July", "August",
                              "September", "October", "November", "December"};
    return monthNames[m - 1];
}

bool Date::isLeapYear(int year) {
    return (year % 4 == 0) && ( (year % 100 != 0 ) || (year % 400 == 0));
}

void Date::printDateV1() {
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}

void Date::printDateV2() {
    string monthName;
    monthName = printMonth(month);
    cout << monthName << " " << getDay() << ", " << getYear() << endl;
}

void Date::printDateV3() {
    string monthName;
    monthName = printMonth(month);
    cout << getDay() << " " << monthName << " " << getYear() << endl;
}

void Date::setDaysInMonth() {
    days[0] = 31;
    days[1] = 28;
    days[2] = 31;
    days[3] = 30;
    days[4] = 31;
    days[5] = 30;
    days[6] = 31;
    days[7] = 31;
    days[8] = 30;
    days[9] = 31;
    days[10] = 30;
    days[11] = 31;
};

void Date::setDaysUpToMonth() {
    daysUpToMonth[0] = 0;
    daysUpToMonth[1] = 31;
    daysUpToMonth[2] = 59;
    daysUpToMonth[3] = 90;
    daysUpToMonth[4] = 120;
    daysUpToMonth[5] = 151;
    daysUpToMonth[6] = 181;
    daysUpToMonth[7] = 212;
    daysUpToMonth[8] = 243;
    daysUpToMonth[9] = 273;
    daysUpToMonth[10] = 304;
    daysUpToMonth[11] = 334;
}

Date Date::operator ++ () {
    Date newDate(month, day, year);

    if (day == days[month - 1]) {
        day = 1;
        month++;
        month %= 12;
        if (month == 1)
            year++;
    } else
        day++;
    return newDate;
}

Date Date::operator ++ (int) {
    Date newDate(month, day, year);

    if (day == days[month - 1]) {
        day = 1;
        month++;
        month %= 12;
        if (month == 1)
            year++;
    } else
        day++;
    return newDate;
}

Date Date::operator -- () {
    Date newDate(month, day, year);
    day--;
    if (day == 0) {
        month--;
        if (month == 0) {
            month = 12;
            year--;
        }
        day = days[month - 1];
    }
    return newDate;
}

Date Date::operator -- (int) {
    Date newDate(month, day, year);
    day--;
    if (day == 0) {
        month--;
        if (month == 0) {
            month = 12;
            year--;
        }
        day = days[month - 1];
    }
    return newDate;
}

int Date::operator - (const Date &right) {
    if (isLeapYear(year))
        return 365 * (year - right.year - 1) + (366 - (daysUpToMonth[month - 1] + day));
    else
        return 365 * (year - right.year - 1) + (365 - (daysUpToMonth[month - 1] + day));
}

ostream& operator <<(ostream &strm, Date &date) {
    strm << date.printMonth(date.getMonth()) << " " << date.getDay() << ", " << date.getYear() << endl;
}

istream& operator >>(istream &strm, Date &date) {
    int valid = 0;
    int month, day, year;
    do {
        cout << "Enter Month: ";
        cin >> month;
        date.setMonth(month);
        cout << "Enter Day: ";
        cin >> day;
        date.setDay(day);
        cout << "Enter Year: ";
        cin >> year;
        date.setYear(year);
        if (date.getDay() <= 0)
            valid = 0;
        switch (date.getMonth()) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (date.getDay() > 31)
                    valid = 0;
                else
                    valid = 1;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (date.getDay() > 30)
                    valid = 0;
                else
                    valid = 1;
                break;
            case 2:
                if (date.getDay() > 29)
                    valid = 0;
                if (date.getDay() < 29)
                    valid = 1;
                break;
        }
        if (valid == 0) {
            cout << endl << "The date " << date.getMonth() << "/" << date.getDay() <<
                 "/" << date.getYear() << " cannot be accepted. Please enter a valid date" << endl;
        }
    } while (valid != 1);

    return strm;
}
