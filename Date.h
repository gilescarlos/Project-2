//
// Created by Giles Pierre Carlos on 2019-03-16.
//
#pragma once

#ifndef DATECLASS_DATE_H
#define DATECLASS_DATE_H

#include <iostream>
#include <string>

using namespace std;

/*! \class Date
    \brief  Date class to store information about the month, day, and year.

*/

class Date {
private:
    int month; /**< month value */
    int day; /**< day value */
    int year; /**< year value */
    int days[12]; /**< stores number of days in each month */
    int daysUpToMonth[12]; /**< stores days passed in the year up to each month value */

public:
    Date();
    //! Date onstructor
    /*!
     * Constructor to create new date.
     * \param mth the value of the month
     * \param dy the value of the day
     * \param yr the value of the year
     * */
    Date(int mth, int dy, int yr);

    void setMonth(int newMonth); ///< Sets the value of the month
    void setDay(int newDay); ///< Sets the value of the day
    void setYear(int newYear); ///< Sets the value of year

    int getMonth() const; ///< Retrieves the month
    int getDay() const; ///< Retrieves the day
    int getYear() const; ///< Retrieves the year

    void printDateV1(); ///< Prints the date in format 1
    void printDateV2(); ///< Prints the date in format 2
    void printDateV3(); ///< Prints the date in format 3

    void setDaysInMonth(); ///< sets how many days are in each month
    void setDaysUpToMonth(); ///< sets how many days have passed in the year up to a month

    string printMonth(int month); ///< prints the name of a month

    bool isLeapYear(int year); ///< determines whether the year is a leap year or not

    Date operator ++ (); ///< increment operator overload
    Date operator ++ (int); ///< increment operator overload
    Date operator -- (); ///< decrement operator overload
    Date operator -- (int); ///< decrement operator overload

    int operator - (const Date &); ///< subtraction operator overload

    friend ostream& operator <<(istream &strm, Date &date); ///< out stream operator overload
    friend istream& operator >>(istream &strm, Date &date); ///< in stream operator overload

};


#endif //DATECLASS_DATE_H
