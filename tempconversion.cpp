#include <bits/stdc++.h>
using namespace std ;

int main () {
    double temp ;
    char unit1, unit2 ;

    cout << "***********Temperature Conversion***********" << endl ; 

    cout << "what unit you want to convert from? " << endl ;
    cout << "F = Fahrenheit, C = Celsius" << endl ;
    cin >> unit1 ;

    if (unit1 != 'F' && unit1 != 'C') {
        cout << "Please enter in only F or C." << endl ;
        return 0 ;
    }

    cout << "what unit you want to convert to?" << endl ;
    cout << "F = Fahrenheit, C = Celsius" << endl ;
    cin >> unit2 ;

    if (unit2 != 'F' && unit2 != 'C') {
        cout << "Please enter in only F or C." << endl ;
        return 0 ;
    }

    if (unit1 == 'F' && unit2 == 'C') {
        cout << "For conversion from F to C, enter the temperature in Fahrenheit: " ;
        cin >> temp ;
        
        cout << "The given temperature in Celsius would be: " << (temp - 32) / 1.8 << "F" << endl ;
    }

    else if (unit1 == 'C' && unit2 == 'F') {
        cout << "For conversion from C to F, enter the temperature in Celsius: " ;
        cin >> temp ;

        cout << "The given temperature in Fahrenheit would be: " << (temp * 1.8) + 32 << "C" << endl ;
    }
    else if (unit1 == unit2) {
        cout << "Please input different units." << endl ;
    }

    cout << "********************************************" << endl ;

    return 0 ;
}