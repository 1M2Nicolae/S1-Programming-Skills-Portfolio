#include <iostream> // declares objects that control reading input and output
#include <string> // including strig data type
using namespace std; // declare a standard namespace

/* 
   Write a program that tests if a value is even. The programme should adhere to the following rules

    The program should ask the user for a number from within the main function
    The entered number should be passed to a function which determines if the value is an even number
    If the number is even the function should return the following message: The provided number is even
    If the number is odd the function should return the following message: The provided number is odd
    The returned message should be output from within the main function

*/


// geeksforgeeks - https://www.geeksforgeeks.org/cpp/cpp-program-to-check-whether-number-is-even-or-odd/
// w3schools - https://www.w3schools.com/cpp/cpp_functions.asp


// Calling the funcrion for odd's or even numbers
string evennumbers (int number){
    if (number %2 == 0) {
        return "The provided number is even";
    } else {
        return "The proided number is odd";
    }
    }


int main() { // defining the main function
    // asking the user a number from the main funtion
    int input;
    cout<<"Enter your number: ";
    cin>> input;


    // Call the function and store the mesage into main function
    string output = evennumbers (input);
    cout<< output << endl;


    return 0; // program  executed successfully
}


