#include <iostream>
using namespace std;

class romanType{
public:
    string setNumeral(string);
    int getValue(string);
    bool errorFound(string);
    romanType();
    int calcValue(int, int, int);
};