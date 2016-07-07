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


int main()
{
    double input;
    double low, high;
    bool status = true;
    
    cout << "Please enter a decimal number (enter '|' to quit): ";
    cin >> input;
    low = high = input;
    cout << input << ", the only number entered so far.\n";

    
    while (status) {
        cout << "Please enter another decimal number (enter '|' to quit): ";
        cin >> input;
        
        if (cin.fail()) {
            cout << "Exiting\n";
            status = false;
            break;
        }
        if (find_smallest(input, low)) {
            low = input;
            cout << input << ", the smallest so far.\n";

        } else if (find_largest(input, high)) {
            high = input;
            cout << input << ", the largest so far.\n";
        } else {
            cout << input << "\n";
        }
        
        
    }
}
