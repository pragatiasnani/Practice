#include <bits/stdc++.h>
using namespace std ;

int main () {
    double temp ;
    char unit ;

    cout << "***********Temperature Conversion***********" << endl ; 

    cout << "what unit you want to convert from? " << endl ;
    cout << "F = Fahrenheit, C = Celsius" << endl ;
    cin >> unit ;

    unit = toupper(unit) ;

    if (unit != 'F' && unit != 'C') {
        cout << "Please enter in only F or C." << endl ;
        return 0 ;
    }

    if (unit == 'F') {
        cout << "For conversion from F to C, enter the temperature in Fahrenheit: " ;
        cin >> temp ;
        
        cout << "The given temperature in Celsius would be: " << (temp - 32) / 1.8 << " °C" << endl ;
    }

    else if (unit == 'C') {
        cout << "For conversion from C to F, enter the temperature in Celsius: " ;
        cin >> temp ;

        cout << "The given temperature in Fahrenheit would be: " << (temp * 1.8) + 32 << " F" << endl ;
    }

    cout << "********************************************" << endl ;

    return 0 ;
}