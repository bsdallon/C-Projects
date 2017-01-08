#include "dateType.h"

int main() {
    dateType date;
    bool errorFound;

    int month = date.getMonth();
    int day = date.getDay();
    int year = date.getYear();

    errorFound = date.setDate(month, day, year);
    date.printDate(errorFound);

    return 0;
}