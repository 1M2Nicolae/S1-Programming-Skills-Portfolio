#include <iostream> // declares objects that control reading input and output
#include <string> // including strig data type
#include <cctype> // inbuild functions to handle printable or control characters 
using namespace std; // declare a standard namespace

/* 
   Write a simple search engine that tests if a string is present in a string array. The array you need to declare should be initialised with the following values 
   "Jake" "Zac", "Ian", "Ron", "Sam", "Dave". The string you are searching for is "Sam"

Your program should loop the array and test each array index against the search term. If the search term is found the program should output an appropriate message
Optional Requirements
Allow the user to enter the name to be searched
*/

// Function to convert string to lowercase : https://www.geeksforgeeks.org/cpp/ctype-hcctype-library-in-c-c-with-examples/S
// Linear Search algorithm: https://www.geeksforgeeks.org/dsa/linear-search/
string toLowerCase(string str) {
    for (char& c : str) {
        c = tolower(c);
    }
    return str;
}

int main() { // defining the main function
    
    // Variable data to store names
    string Names [6] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    int size = sizeof(Names) / sizeof(Names[0]);

    // Ask user to search for a name
    string namesearch;
    cout<<"Enter the name you want to search for: ";
    getline (cin, namesearch );


    // Checking if the name is found
    bool found = false;

    // loop condition to search trough the array fr the name
    for (int i = 0; i < size; ++i) {
        if (toLowerCase (Names[i]) == toLowerCase (namesearch)) {
            cout << "Name '" << namesearch << "' was found in the list!" << endl;
            found = true;
            break;
        }
    }
    
    // If not found, display message
    if (!found) {
        cout << "Name '" << namesearch << "' not found in the list." << endl;
    }





return 0; // program  executed successfully
}