/***    Check if a Year is Leap Year    ******/
#include<iostream>

using namespace std;

int main() {
    int val;
    cout << "Enter year ";
    cin >> val;
    bool cond = (val % 4 == 0) && (val % 100 != 0) || (val % 400==0);
    cout << cond;
   
    
}