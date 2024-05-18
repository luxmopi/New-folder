#include <iostream>
#include <string>

using namespace std;

int main()
{
    //varibal
    string firstname;
    string lastname;
    int age;
    double waight;

    //output
    cout << "Enter first name, last name, age, and weight, separated by spaces." << endl;
        
        
        

    //input >>is for saparate input 
    cin >> firstname >> lastname;
    cin >> age >> waight;


     //last out put result
    cout << "Name =" << firstname  << " " << lastname << endl;
    cout << "Age =" << age << endl;
    cout << "Waight" << waight << endl;

    

    return 0;
}
