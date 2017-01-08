#include "dateType.h"

bool dateType::setDate(int month, int day, int year) {
    bool leapYear = false;
    bool errorFound = false;
    int dayInMonth = 0;

        if (month > 0 && month < 13)
            dMonth = month;
        else {
            cout << month << " is not a valid month." << endl;
            errorFound = true;
        }
        if (year > 0) {
            leapYear = isLeapYear(year);
            dYear = year;
        }
        else {
            cout << year << " is not a valid year." << endl;
            errorFound = true;
        }
        switch (dMonth) {
            case 4:
            case 6:
            case 9:
            case 11:
                dayInMonth = 30;
                break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                dayInMonth = 31;
                break;
            case 2:
                if (leapYear)
                    dayInMonth = 29;
                else
                    dayInMonth = 28;
                break;
            default:break;
        }
        if (day > 0 && day <= dayInMonth)
            dDay = day;
        else if (day == 29 && !leapYear) {
            cout << day << " is not valid because " << year << " is not a leap year." << endl;
            errorFound = true;
        }
        else{
            cout << day << " is not a valid day." << endl;
            errorFound = true;
        }
   return errorFound;
}
int dateType::getDay() const
{
    int dDay;
    cout << "Enter Day: ";
    cin >> dDay;
    return dDay;
}
int dateType::getMonth() const
{
    int dMonth;
    cout << "Enter Month: ";
    cin >> dMonth;
    return dMonth;
}
int dateType::getYear() const
{
    int dYear;
    cout << "Enter Year: ";
    cin >> dYear;
    return dYear;
}
void dateType::printDate(bool errorFound) const
{
    bool error = errorFound;

    if(!error)
        cout << dMonth << "-" << dDay << "-" << dYear << " is a valid date." << endl;
    else
        cout << "Date input invalid." << endl;
}
bool dateType::isLeapYear(int y) {
    int year = y;

    return year % 4 == 0;
}

dateType::dateType(int month, int day, int year)
{
    setDate(month, day, year);
}