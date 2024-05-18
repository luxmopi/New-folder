#include <iostream>

using namespace std;

int main()
{
    float Paint;
    int doorw, doorl;
    int wind1w, wind1l, wind2w, wind2l;
    int booksw, booksl;
    int roomw, rooml, roomh;
    int totllare;
   


    cout << "Enter Door width and lengths sapartate by one space: " << endl;
    cin >> doorw >> doorl;

    cout << "Enter first window width and lengths sapartate by one space: " << endl;
    cin >> wind1w >> wind1l;

    cout << "Enter second window width and lengths sapartate by one space: " << endl;
    cin >> wind2w >> wind2l;
    
    cout << "Enter book self width and lengths sapartate by one space: " << endl;
    cin >> booksw >> booksl;

    cout << "Enter room width lengths and hight sapartate by one space:" << endl;
    cin >> roomw >> rooml >> roomh;

    totllare = (((roomw * roomh) * 2) + ((rooml * roomh) * 2) - (doorw * doorl) + ((wind1l * wind1w) + (wind2l * wind2w)) + (booksl * booksw));

    Paint = totllare / 120;

    cout << "Total Paint that need :" << Paint << endl;

    return 0;

    


}
