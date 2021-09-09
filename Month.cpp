//Enter year and month number to see the number of days per month. 

#include <iostream>
using namespace std;
bool IsLeap(int); //true or false

int main()
{
  int year = 0;
  int mon = 0;

  cout << "Enter the year: "; //input
  cin >> year;

  if (IsLeap(year)==true) { 
  cout << "Enter month: ";
  cin >> mon;
    if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12){//number of days per month
	cout << "31 days";
    }
    else if(mon==4||mon==6||mon==9||mon==11){
	cout << "30 days";
    }
    else { 
	cout << "29 days"; //february days
    }
  }
  else if (IsLeap(year)==false) {
    cout << "Enter the month: "; //input
    cin >> mon;
    if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12){ //number of days
	cout << "31 days";
    }
    else if(mon==4||mon==6||mon==9||mon==11){
	cout << "30 days";
    }
    else { 
	cout << "28 days"; //feb days
    }

  }

}

bool IsLeap(int year) {

  if(year%400 ==0 || (year%100 != 0 && year%4 == 0))//checking if its a leap year or not
    return true;
  else
    return false;

}
