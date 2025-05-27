/*******  Print the ASCII Value of a Character in C++  ******/

#include<iostream>

using namespace std;

int main() {
    char val;
    cout << "Enter a character\n";
    cin >> val;
    cout << "Entered "<< val <<" ASCII value is "<< int(val);
}