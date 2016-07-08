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
    constexpr double cm_to_meter = 0.01;
    constexpr double inch_to_meter = 0.0254;
    constexpr double feet_to_meter = 0.3048;
    
    double new_input = 0;
    
    if (unit == "in") {
        new_input = input * inch_to_meter;
    } else if (unit == "cm") {
        new_input = input * cm_to_meter;
    } else if (unit == "ft") {
        new_input = input * feet_to_meter;
    } else {
        new_input = input;
    }
    
    return new_input;
}

void print_summary(double low, double high, double sum, int count, vector<double> list) {
    cout << "Total values entered: " << count << ".\n";
    cout << "Sum of values entered: " << sum << " meters.\n";
    cout << "Smallest value entered: " << low << " meters.\n";
    cout << "Largest value entered: " << high << " meters.\n";
    cout << "See below for a list of all the values entered: \n";
    for (double value : list) {
        cout << value << "   ";
    }
    cout << "\n";
}


int main()
{
    double input, converted;
    string unit;
    double low, high;
    int count;
    double total = 0;
    bool status = true;
    vector<double> value_list(0);
    
    
    
    cout << "Please enter a decimal number and a unit ['cm', 'm', 'in', 'ft'](enter '|' to quit): ";
    cin >> input >> unit;
    if (cin.fail() || (unit != "cm" && unit != "m" && unit != "in" && unit != "ft")) {
        status = false;
        print_summary(low, high, total, count, value_list);
    }
    
    converted = convert(input, unit);
    ++count;
    total += converted;
    value_list.push_back(converted);
    
    
    low = high = converted;
    cout << input << unit << " is " << converted << " meters, the only number entered so far.\n";

    
    while (status) {
        cout << "Please enter another decimal number and unit (enter '|' to quit): ";
        cin >> input >> unit;
        converted = convert(input, unit);
        
        if (cin.fail() || (unit != "cm" && unit != "m" && unit != "in" && unit != "ft")) {
            status = false;
            print_summary(low, high, total, count, value_list);
            break;
        }
        if (find_smallest(converted, low)) {
            low = converted;
            cout << converted << " meters, the smallest so far.\n";

        } else if (find_largest(converted, high)) {
            high = converted;
            cout << converted << " meters, the largest so far.\n";
        } else {
            cout << converted << " meters.\n";
        }
        ++count;
        total += converted;
        value_list.push_back(converted);
        
    }
}
