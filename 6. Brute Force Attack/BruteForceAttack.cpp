#include <iostream> // declares objects that control reading input and output
#include <string> // including strig data type
using namespace std; // declare a standard namespace

/* 
   You are an inexperienced hacker trying to find the correct password to enter a safe...

Write a programme that defines the correct password as 12345, and allows users to enter password attempts until they reach the correct answer.

Your programme should use a while loop to allow the user to keep entering password attempts until correct. Once the correct password is entered,
the program should output an appropriate message e.g "Welcome to the Secure Area"

Optional Requirements
Modify the solution to Brute-Force Attack to include a maximum of 5 password attempts. 
Each time the user enters an incorrect password, they should be told how many password attempts remain. 
If there are 5 failed password attempts the while loop should end and the program should inform the user that the authorities have been alerted!
*/

/* Future reading and practice from geeksforgeeks: https://www.geeksforgeeks.org/cpp/cpp-loops
and w3schools: https://www.w3schools.com/cpp/cpp_while_loop.asp
*/ 


int main() { // defining the main function
    string correctpassword = "12345";
    string userinput; // defining user variable inmput
    int attempts = 0; // variable attempt 0 start counting from 1
    int maxattempts = 5; // variable defining for setting attempts limits
     


    // while loop
    while (attempts < maxattempts){
        cout << "Enter your Password: ";
        cin >> userinput;

     //condition if statement
     if (userinput == correctpassword){
        cout<< "Welcome to the Seure Area!" << endl; // console out prompt if password succesfull
        break;

    // else statement for multiple attempts
     }else{
        attempts++;
        int remainingattempts = maxattempts - attempts; 
        if (remainingattempts > 0) {
        
            cout<< "Incorrect Password! \nYou have " << remainingattempts << " attempts remaining." << endl; //cons output for incorect pw prompt
        } else {
                cout<< "Too many failed attempts.The authorities have been alerted!" << endl; // output promt 5x wrong attempts
            }
        }
    }

        


return 0; // program  executed successfully
}