#include <iostream>

using namespace std;

const int HALF_A_DOLLAR = 50;
const int QUARTER = 25;
const int ADIME = 10;
const int NICKLE = 5;

int main()
{

    int halfDollar;
    int cent;
    int quarter;
    int dime;
    int nickle;
    int remainDollarCnge;
    int remainQuarter;
    int remainDime;
    int remainNickle;
    int pannies;

    cout << "Enter change in cent :" << endl;
    cin >> cent;

    halfDollar = cent / HALF_A_DOLLAR;
    remainDollarCnge = cent % HALF_A_DOLLAR;

    
    quarter = remainDollarCnge / QUARTER;
    remainQuarter = remainDollarCnge % QUARTER;

    dime = remainQuarter / ADIME;
    remainDime = remainQuarter % ADIME;

    nickle = remainDime / NICKLE;
    remainNickle = remainDime % NICKLE;

    pannies = remainNickle;

    cout << halfDollar << " " << quarter << " " << dime << " " << nickle << " " <<  pannies << endl;

    return 0;



}