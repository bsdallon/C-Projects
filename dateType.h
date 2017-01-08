#include <iostream>

using namespace std;

class dateType
{
public:
    bool setDate(int month, int day, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void printDate(bool errorFound) const;
    bool isLeapYear(int year);
    dateType(int month = 1, int day = 1, int year = 1900);
private:
    int dMonth;
    int dDay;
    int dYear;
};