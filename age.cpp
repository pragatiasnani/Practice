#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin >> age ;
    if (age < 18) {
        cout << "you are not eligible";
    }
    if (age > 18 && age <= 54){
        cout << "you are eligible";
    }
    if (age > 54 && age <= 57){
        cout << "you are eligible but retirement soon!" ;
    }
    if (age > 57) {
        cout << "retirement time" ;
    }
    return 0 ;
}