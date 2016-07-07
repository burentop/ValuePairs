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
    int val1 = 1;
    int val2 = 1;
    bool status = true;
    
    cout << "Please enter two whole numbers separated by a space (enter '\' to quit): ";
    cin >> val1 >> val2;
    cout << val1 << " " << val2 << "\n";
    
    while (status) {
        cout << "Please enter two whole numbers separated by a space (enter '\' to quit): ";
        cin >> val1 >> val2;
        if (cin.fail()) {
            cout << "Exiting\n";
            status = false;
        }
        cout << val1 << " " << val2 << "\n";
    }
}
