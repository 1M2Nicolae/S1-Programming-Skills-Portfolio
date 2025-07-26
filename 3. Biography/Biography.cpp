#include <iostream> // declares objects that control reading input and output
#include <string> // including strig data type
using namespace std; // declare a standard namespace

/* 
   Create a program that prints your name, hometown and age to the console. The program has the following constraints:

    Each item should be stored using a variable of an appropriate data type.
    Each item should be printed on a new line.
    You can only use cout once.
*/

int main() { // defining the main function
    string name= "Nicolae"; // variable data to store name
    string hometown= "Hunedoara"; //variable data storing hometown 
    int age = 34; // variable data to sotre age
    cout<< "Name = " << name <<"\nHometown = " << hometown << "\nAge = " << age << endl; // console output value
    


return 0; // program  executed successfully
}