#include <bits/stdc++.h>
using namespace std;
int main(){
double a;
double b;
double c;
cout << "Enter side a: " ;
cin >> a ;
cout << "Enter side b: ";
cin >> b ;
a = pow(a , 2) ;
b = pow(b , 2);
c = sqrt (a + b) ;
cout << "Hypotenuse of a and b is: " << c ;
return 0 ;
}