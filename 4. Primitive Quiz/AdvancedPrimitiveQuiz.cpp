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


// Function to convert string to lowercase : https://www.geeksforgeeks.org/cpp/ctype-hcctype-library-in-c-c-with-examples/S
string toLowerCase(string str) {
    for (char& c : str) {
        c = tolower(c);
    }
    return str;
}

int main() { // defining the main function
   const int totalQuestions = 10;
    
// Variable data to store Questions
    string questions[totalQuestions] = {
        "France", "United Kingdom", "Spain", "Romania", "Greece",
        "Portugal", "Italy", "Norway", "Germany", "Ireland"};

// Variable data to define answers
    string answers[totalQuestions] = {
        "Paris", "London", "Madrid", "Bucharest", "Athens",
        "Lisbon", "Rome", "Oslo", "Berlin", "Dublin"};

        string useranswer; // variable to store user answer

        cout<< "10 Capitals Cities of Europe Quiz:\n";  // console output
        cout<< "__________________________________\n"; // console output 



         // if statement conditions

         for (int i = 0; i < totalQuestions; ++i) {
        cout << i + 1 << ". What is the capital of " << questions[i] << "? ";
        cin >> useranswer;

        if (toLowerCase(useranswer) == toLowerCase(answers[i])) {
            cout << "Correct!\n";
            
        } else {
            cout << "Incorrect!. The capital of " << questions[i] << " is " << answers[i] << ".\n";
        }
    }

   

    return 0; // program  executed successfully
}

