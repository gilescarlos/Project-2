//
// Created by Giles Pierre Carlos on 2019-03-16.
//
#pragma once

#ifndef DATECLASS_DATE_H
#define DATECLASS_DATE_H

#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int month, day, year;
    int days[12];
    int daysUpToMonth[12];

public:
    Date();
    Date(int mth, int dy, int yr);

    void setMonth(int newMonth);
    void setDay(int newDay);
    void setYear(int newYear);

    int getMonth() const;
    int getDay() const;
    int getYear() const;

    void printDateV1();
    void printDateV2();
    void printDateV3();

    void setDaysInMonth();
    void setDaysUpToMonth();

    string printMonth(int month);

    bool isLeapYear(int year);

    Date operator ++ ();
    Date operator ++ (int);
    Date operator -- ();
    Date operator -- (int);

    int operator - (const Date &);

    friend ostream& operator <<(istream &strm, Date &date);
    friend istream& operator >>(istream &strm, Date &date);

};


#endif //DATECLASS_DATE_H
