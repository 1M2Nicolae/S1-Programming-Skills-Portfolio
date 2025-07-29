#include <iostream> // declares objects that control reading input and output
#include <string> // including strig data type
#include <limits> // clear the cin buffer
using namespace std; // declare a standard namespace

/* 
   Create a program that prints your name, hometown and age to the console. The program has the following constraints:

    Each item should be stored using a variable of an appropriate data type.
    Each item should be printed on a new line.
    You can only use cout once.

    Advanced requirements

    Have the user input the values for name, hometown and age
    Try giving the program both your first and second name when asked. What do you notice? Can you provide a fix?
    Try entering a string or letter value when asked to enter your age. What happens? Can you provide a fix?

If completing the optional requirements you may use cout more than once to request user input. However the output of information must be performed with a single cout
*/

// Researches and references for advance req:
// geeksforgeeks - https://www.geeksforgeeks.org/cpp/getline-string-c/   
//geeksforgeeks.org - https://www.geeksforgeeks.org/cpp/how-to-use-cin-fail-method-in-cpp/

int main() { // defining the main function
    string name; // variable data to store name
    cout<< "Enter your FULL NAME: ";
    getline (cin, name); // It handle the FULL NAME with space to fix the error

    string hometown; //variable data storing hometown 
    cout <<"Enter yur hometown: ";
    getline(cin,hometown); // apply space error in case of using multile words for hometown :D

    int age; // variable data to sotre age
    cout<< "Enter your age: ";
    cin>> age;

    // While loop and input validation for AGE 
    while(cin. fail()){    // bolean condition 0
        cin. clear(); // clear the error from input 
        cin. ignore(numeric_limits<streamsize>::max(), '\n'); // ignor letters >> for invalid input
        cout<< "Invalid input. Please enter a number for your age: ";
        cin>> age;
    }


    cout<< "Name = " << name <<"\nHometown = " << hometown << "\nAge = " << age << endl; // console output value
    


return 0; // program  executed successfully
}