/*******    Check if a Number is Even using Boolean data type    *******/

#include<iostream>

using namespace std;

int main() {
    int val;
    cout << "Enter a value ";
    cin >> val;
    bool cond;
    cond = (val % 2 ==0);
    cout << cond;
}