#include <iostream>

using namespace std;

//named constants
const double CENTIMETER_PER_INCHES = 2.14;
const int INCHES_PER_FOOT = 12;


int main()
{
    int inches;
    int feet;
    double totallInces;

    cout << "Enter feet :" ;
    cin >> feet;
    cout << endl;

    cout << "Enter inches :" ;
    cin >> inches;
    cout << endl;

    cout << "The number you enter are " << feet 
         << " for Feet " << " and " << inches 
         << " for Inches " << endl;

    //calulation convert all feet to inches
    totallInces = ( feet * INCHES_PER_FOOT ) + inches;


    //calulation convert feet and inches to cm
    cout << "Feed and Inches convetion to cm is =" << totallInces * CENTIMETER_PER_INCHES << endl;

    return 0;

}