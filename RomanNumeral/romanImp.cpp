#include "roman.h"

romanType::romanType(){
    cout << "Valid Roman Numeral Values:\n"
            "M = 1000\n"
            "D = 500\n"
            "C = 100\n"
            "L = 50\n"
            "X = 10\n"
            "V = 5\n"
            "I = 1" << endl;
};

string romanType::setNumeral(string s){
    string numeral = s;
    bool error = true;

    while (error == true) {
        cout << "Enter a Roman Numeral: " << endl;
        cin >> numeral;

        if (errorFound(numeral) == false) {
            break;
        }
    }
    return numeral;
}

bool romanType::errorFound(string b){
    string numeral = b;

    for (int i = 0; i < numeral.size(); i++) {
        if (numeral[i] == 'M' || numeral[i] == 'D' || numeral[i] == 'C' || numeral[i] == 'L' || numeral[i] == 'X' ||
            numeral[i] == 'V' || numeral[i] == 'I' || numeral[i] == 'm' || numeral[i] == 'd' || numeral[i] == 'c' ||
            numeral[i] == 'l' || numeral[i] == 'x' || numeral[i] == 'v' || numeral[i] == 'i'){}
        else {
            cout << "Please enter a valid Roman Numeral" << endl;
            return (true);
        }
    }
    return(false);
}

int romanType::calcValue(int l, int c, int t){
    int currentValue = c;
    int lastValue = l;
    int totalValue = t;

    if (lastValue < currentValue) {
        currentValue = currentValue - (2 * lastValue);
    }
    totalValue = totalValue + currentValue;
    return totalValue;
}

int romanType::getValue(string s){
    string numeral = s;
    int totalValue = 0;
    int currentValue = 0;
    int lastValue = 1000;

    for (int i = 0; i < numeral.size(); i++){
        if (numeral[i] == 'M' || numeral[i] == 'm') {
            currentValue = 1000;
            totalValue = calcValue(lastValue,currentValue,totalValue);
            lastValue = 1000;
        }
        else if(numeral[i] == 'D' || numeral[i] == 'd') {
            currentValue = 500;
            totalValue = calcValue(lastValue,currentValue,totalValue);
            lastValue = 500;
        }
        else if(numeral[i] == 'C' || numeral[i] == 'c') {
            currentValue = 100;
            totalValue = calcValue(lastValue,currentValue,totalValue);
            lastValue = 100;
        }
        else if(numeral[i] == 'L' || numeral[i] == 'l') {
            currentValue = 50;
            totalValue = calcValue(lastValue,currentValue,totalValue);
            lastValue = 50;
        }
        else if(numeral[i] == 'X' || numeral[i] == 'x') {
            currentValue = 10;
            totalValue = calcValue(lastValue,currentValue,totalValue);
            lastValue = 10;
        }
        else if(numeral[i] == 'V' || numeral[i] == 'v') {
            currentValue = 5;
            totalValue = calcValue(lastValue,currentValue,totalValue);
            lastValue = 5;
        }
        else if(numeral[i] == 'I' || numeral[i] == 'i') {
            currentValue = 1;
            totalValue = calcValue(lastValue,currentValue,totalValue);
            lastValue = 1;
        }
    }
    cout << numeral << " is equal to " << totalValue << " in decimals" << endl;
}

