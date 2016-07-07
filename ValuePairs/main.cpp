//
//  main.cpp
//  ValuePairs
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    double val1, val2;
    bool status = true;
    
    
    while (status) {
        cout << "Please enter two decimal numbers separated by a space (enter '\' to quit): ";
        cin >> val1 >> val2;
        if (cin.fail()) {
            cout << "Exiting\n";
            status = false;
            break;
        }
        if (val1 < val2) {
            cout << "The smaller value is " << val1 << ".\n";
            cout << "The larger value is " << val2 << ".\n";
            if (val2 - val1 < 0.01) {
                cout << "The numbers are almost equal.\n";
            }
        } else if (val2 < val1) {
            cout << "The smaller value is " << val2 << ".\n";
            cout << "The larger value is " << val1 << ".\n";
            if (val1 - val2 < 0.01) {
                cout << "The numbers are almost equal.\n";
            }
        } else {
            cout << "The numbers are equal.\n";
        }
        
        
    }
}
