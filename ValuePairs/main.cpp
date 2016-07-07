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
    int val1, val2;
    int low, high;
    bool status = true;
    
    
    while (status) {
        cout << "Please enter two whole numbers separated by a space (enter '\' to quit): ";
        cin >> val1 >> val2;
        if (cin.fail()) {
            cout << "Exiting\n";
            status = false;
            break;
        }
        if (val1 <= val2) {
            low = val1;
            high = val2;
        } else {
            low = val2;
            high = val1;
        }
        cout << "The smaller value is " << low << ".\n";
        cout << "The larger value is " << high << ".\n";
    }
}
