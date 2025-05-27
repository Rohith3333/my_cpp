/*****Convert Fahrenheit to Celsius ******/

#include<iostream>

using namespace std;

int main() {
    float val,celsius ;
    cout << "Enter Farenhit value "; 
    cin >> val;
    celsius = (val - 32 ) * (5.0/9);
    cout << "In celsius is "<< celsius;
}