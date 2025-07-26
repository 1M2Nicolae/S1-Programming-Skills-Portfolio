#include <iostream> // declares objects that control reading input and output
#include <string> // including strig data type
using namespace std; // declare a standard namespace

/* 
   Use your newly acquired knowledge of the for loop to complete the following tasks. Print all values to console in each case.

    Write a loop that counts up from 0 to 50 in increments of 1.
    Write a loop that counts down from 50 to 0 in decrements of 1.
    Write a loop that counts up from 30 to 50 in increments of 1.
    Write a loop that counts down from 50 to 10 in decrements of 2.
    Write a loop that counts up from 100 to 200 in increments of 5.

You may include all loops in a single project
*/

int main() { // defining the main function

    // Count up from 0 to 50 in increments of 1
    cout<< "Counting up from 0 to 50:" <<endl; //coutput prompt
    for (int i= 0; i<=50; i++){ // variable data with formula increment +
        cout << i << " "; // coutput numbers
    }
    cout << "\n \n"; // break the line endl;

    // Count down from 50 to 0 in decrement of 1
    cout<< "Counting down from 50 to 0:" <<endl;
    for (int i= 50; i>=0; i--){
        cout << i << " ";
    }
    cout << "\n \n";

    // Count up from 30 to 50 in increments of 1
    cout<< "Counting up from 30 to 50:" <<endl; 
    for (int i= 30; i<=50; i++){ 
        cout << i << " "; 
    }
    cout << "\n \n";

    // Count down from 50 to 10 in decrements of 2
    cout<< "Counting down from 50 to 10 by 2s:" <<endl;
    for (int i= 50; i>=10; i-=2){
        cout << i << " ";
    }
    cout << "\n \n";

    // Count up from 100 to 200 in increments of 5
    cout<< "Counting up from 100 to 200:" <<endl; 
    for (int i= 100; i<=200; i+=5){ 
        cout << i << " ";
    }
    cout << "\n \n";


    


return 0; // program  executed successfully
}