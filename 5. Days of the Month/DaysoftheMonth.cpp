#include <iostream> // declares objects that control reading input and output
#include <string> // including strig data type
using namespace std; // declare a standard namespace

/* 
   You are a freelance calendar maker. Unfortunately, like me, you are useless are remembering how many days there are in each month of the year.

Write a program that uses a switch statement to tell a user how many days there are in a month.

Your cases should test a number corresponding to the months (e.g. 1 = January, 12 = December), and cases should print out how many days there are in a month.
*/


int main() { // defining the main function
    int month; //variable data to store the month with asociated case no.
    cout<< "Calendar 2025" << "\nEnter a month of the year 1-12: "; // console output prompt
    cin>>month; // user imput
    
    //switch cases
    switch (month) {
        case 1:
        cout <<"1-January 2025 has 31 calendaristic days." << endl;
        break;

        case 2:
        cout <<"2-February 2025 has 28 calendaristic days." << endl;
        break;

        case 3:
        cout <<"3-March 2025 has 31 calendaristic days." << endl;
        break;

        case 4:
        cout <<"4-April 2025 has 30 calendaristic days." << endl;
        break;

        case 5:
        cout <<"5-May 2025 has 31 calendaristic days." << endl;
        break;

        case 6:
        cout <<"6-June has 30 calendaristic days." << endl;
        break;

        case 7:
        cout <<"7-July 2025 has 31 calendaristic days." << endl;
        break;

        case 8:
        cout <<"8-August 2025 has 31 calendaristic days." << endl;
        break;

        case 9:
        cout <<"9-September has 30 calendaristic days." << endl;
        break;

        case 10:
        cout <<"10-October has 31 calendaristic days." << endl;
        break;

        case 11:
        cout <<"11-November has 30 calendaristic days." << endl;
        break;

        case 12:
        cout <<"12-December has 31 calendaristic days" << endl;
        break;

        default:
        cout <<"Invalid month number.Please enter a valid month (between 1-12)" << endl;
        break;
    }

    
    


return 0; // program  executed successfully
}