//
//  main.cpp
//  ValuePairs
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

bool find_smallest(double x, double y)
{
    if (x <= y) {
        return true;
    }
    return false;
}

bool find_largest(double x, double y)
{
    if (x >= y) {
        return true;
    }
    return false;
}

double convert(double input, string unit) {
    constexpr double inch_to_cm = 2.54;
    constexpr double meter_to_cm = 100.0;
    constexpr double feet_to_cm = 30.54;
    
    double new_input = 0;
    
    if (unit == "in") {
        new_input = input * inch_to_cm;
    } else if (unit == "m") {
        new_input = input * meter_to_cm;
    } else if (unit == "ft") {
        new_input = input * feet_to_cm;
    } else {
        new_input = input;
    }
    
    return new_input;
}


int main()
{
    double input, converted;
    string unit;
    double low, high;
    bool status = true;
    
    
    
    cout << "Please enter a decimal number and a unit ['cm', 'm', 'in', 'ft'](enter '|' to quit): ";
    cin >> input >> unit;
    
    converted = convert(input, unit);
    
    low = high = converted;
    cout << input << unit << " is " << converted << "cm, the only number entered so far.\n";

    
    while (status) {
        cout << "Please enter another decimal number and unit (enter '|' to quit): ";
        cin >> input >> unit;
        converted = convert(input, unit);
        
        if (cin.fail()) {
            cout << "Exiting\n";
            status = false;
            break;
        }
        if (find_smallest(converted, low)) {
            low = converted;
            cout << converted << "cm, the smallest so far.\n";

        } else if (find_largest(converted, high)) {
            high = converted;
            cout << converted << "cm, the largest so far.\n";
        } else {
            cout << converted << "cm.\n";
        }
        
        
    }
}
