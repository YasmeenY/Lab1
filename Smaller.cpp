
/*
This program will pick the smaller of the 2 inputs 
*/
#include <iostream>
using namespace std;

int main()
{
    int numb1, numb2; //user inputs
    cout << "Enter the first digit: "; //asks for user input
    cin >> numb1;
    cout << "Enter 2nd digit: ";
    cin >> numb2;
    if (numb1 < numb2) { //check which one is smaller
        cout<< "The smaller number is: " << numb1;
    }
    else {
        cout << "The smaller number is: " << numb2;
    }
    return 0;
}
