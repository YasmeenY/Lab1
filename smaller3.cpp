//This program will pick the smallest of the 3 inputs. 

#include <iostream>
using namespace std;

int main()
{
    int numb1, numb2, numb3;
    cout << "Enter 1st digit: ";//user inputs
    cin >> numb1;
    cout << "Enter 2nd digit: ";
    cin >> numb2;
    cout << "Enter the 3rd digit: ";
    cin >> numb3;
    if (numb1 < numb2 && numb1 < numb3) { //checking if 1st numb is the smallest
        cout<< "The smallest number is: " << numb1;
    }
    else if (numb2 < numb1 && numb2 < numb3 ) {
        cout << "The smallest number is: " << numb2; //checking the 2nd
    }
    else {
        cout << "The smallest number is: " << numb3;//checking the 3rd
    }
    return 0;
}
