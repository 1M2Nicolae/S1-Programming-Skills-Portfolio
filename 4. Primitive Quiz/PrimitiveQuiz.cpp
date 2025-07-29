#include <iostream> // declares objects that control reading input and output
#include <string> // including strig data type
#include <cctype> // inbuild functions to handle printable or control characters 
using namespace std; // declare a standard namespace

/* 
   You have been asked to write a simple question and answer programme. There is only one question to answer: “What is the capital of France”.

    The programme should ask the user this question, then prompt for a response.
    The user then types in an answer.
    If the answer is correct, the programme should tell the user that their answer was correct.
    If the answer is incorrect, the programme should tell the user that their answer was wrong.

    Advanced Requirements

    What about capital letters? (e.g. paris vs Paris vs PaRis)
    Add additional questions. (e.g. 10 Capitals Cities of Europe Quiz)


*/

int main() { // defining the main function
    string Capital = "Paris"; //variable data to store the capital name P
    string capital = "paris"; //variable data to store the capital name p
    string answer; //variable to sore the answer
    cout << "What is the capital of France? :"; // console output
    cin >> answer; // user input answer

    
    // if statement
    if (answer == Capital){
        cout << " Corect answer!" << endl;
    } else if (answer == capital){
        cout<< "Corect answer!" <<endl;
    } else {
        cout<< "Wrong answer!" <<endl;
    }



    


return 0; // program  executed successfully
}