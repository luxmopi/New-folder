#include <iostream>

using namespace std;

int main()
{

    char ch;

    //ex we enter abcd
    cout << "Enter a string " << endl;

    //cin.get will pick the first number or letter in this case it will pick (a)

    cin.get(ch);
    cout << " After first cin.get " << ch << endl;

    // after that cin.get belove will pick (b) bacuse it will pick the seond letter 
    cin.get(ch);
    cout << "After second cin.get " << ch << endl;

    // cin.put back will put the letter (b) back into input stram line
    cin.putback(ch);

    // then cin.get belove will pick (b) not (c) because cin.put back put (b) back in the input stream 
    // it suppost to be c becaues it the 3 time that we use it 
    cin.get(ch);

    cout << "After put back and cin.get three time " << ch << endl;

    // peek to see the 3(c) letter print out the input but not take it out of the input stream line
    ch = cin.peek();
    cout << "After peek " << ch << endl;

    // cin belove pick c because peek only see the input but not take it out of the input stream line
    cin.get(ch);
    cout << "After peek then cin.get 4 time " << ch << endl;

    return 0;


}