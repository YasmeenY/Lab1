//This program will pick the smallest of the 3 inputs.

#include <iostream>
using namespace std;
bool IsLeap(int); //true or false

int main()
{
  unsigned int year = 0;
  cout << "Enter the year: "; //input
  cin >> year;
  if (IsLeap(year)==true) { 
  cout << year << " Is a leap year!" << endl;
  }
  else if (IsLeap(year)==false) {
    cout << year << "Common year"<< endl;
  }
}

bool IsLeap(int year) {
  if(year%400 ==0 || (year%100 != 0 && year%4 == 0))//checking if its a leap year or not
    return true;
  else
    return false;
}
