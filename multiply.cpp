/*********  Multiply Two Floating-Point Numbers using functions *******/

#include<iostream>

using namespace std;

 void mul(float val1,float val2);

int main() {
   float val1,val2;
    cout << "Enter first value ";
    cin >> val1;
    cout << "Enter Second value ";
    cin >>val2;
    mul( val1, val2);
    return 0;
}

void  mul(float val1,float val2) {
    cout << "Multiplication of both value is "<< val1 *val2;
}