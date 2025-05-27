/****** Swap two numbers    ********/

#include<iostream>

using namespace std;

int main(){
    int val1,val2;
    cout << "Enter first value ";
    cin >> val1;
    cout << "Enter second value ";
    cin >> val2;

    val1 += val2;
    val2 =val1- val2;
    val1 -= val2;

    cout << val1 <<" " <<val2;
    return 0;
}