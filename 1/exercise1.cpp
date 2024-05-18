#include <iostream>

using namespace std;

const int HALF_A_DOLLAR = 50;
const int QUARTER = 25;
const int ADIME = 10;
const int NICKLE = 5;

int main()
{

    int change;

    cout << "Enter change in cent :" << endl;
    cin >> change;

    cout << "The number of dollar to be returned is " << change / HALF_A_DOLLAR << endl;

    change = change % HALF_A_DOLLAR;

    cout << "The number of QUARTER to be returned is " << change / QUARTER << endl;

    change = change % QUARTER;

    cout << "The number of Dime to be returned is " << change / ADIME << endl;

    change = change % ADIME;

    cout << "The number of Nickle to be returned is " << change / NICKLE << endl;

    change = change % NICKLE;

    cout << "The number of pannies to be returned is " << change << endl;

    return 0;

}