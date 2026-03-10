#include <bits/stdc++.h>
using namespace std ;
int main (){
    double num1 ;
    double num2 ;
    char op ;
    
    cout << "**************CALCULATOR**************" << endl ;

    cout << "enter your operator (+, =, / , *): " ;
    cin >> op ;

    cout << "enter number 1: " ;
    cin >> num1 ;

    cout << "enter number 2: " ;
    cin >> num2 ;

    switch (op) {
        case '+' :
        cout << "sum of the 2 numbers is: " << num1 + num2 << endl ;
        break ;

        case '-' :
        cout <<"difference of the 2 numbers is: " << num1 - num2 << endl ;
        break ;

        case '*' :
        cout << "multiplication of the 2 numbers is: " << num1 * num2 << endl ;
        break ;

        case '/' :
        cout << "division of the 2 numbers is: " << num1 / num2 << endl ;
        break ;

        default :
        cout << "use operators amongst +, -, *, / only" << endl ;
        break;
    }
    cout << "**************************************" << endl ;

    return 0 ;
}