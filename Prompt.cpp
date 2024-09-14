#include <iostream>
#include <string>
#include "Prompt.hpp"
using namespace std;

Prompt::Prompt() {
    inputPrompt = "What is your value to check?";
    invalidResponse = "Your input was invalid";
}

void Prompt::setupPrompt() {
    string yesOrNo = "";
    cout << "Would you like to enter a lower bound?* Y/N\n*(If not the default is 0)\nYour Reply: ";
    cin >> yesOrNo;
    if (yesOrNo == "Y" || yesOrNo == "y") {
        cout << "What Would you like the lower bound to be?\nYour Reply: ";
        cin >> lowerBound;
    }
    cout << "Would you like to enter an upper bound?* Y/N\n*(If not the default is 100)\nYour Reply: ";
    cin >> yesOrNo;
    if (yesOrNo == "Y" || yesOrNo == "y") {
        cout << "What Would you like the upper bound to be?\nYour Reply: ";
        cin >> upperBound;
    }
    cout << "Would you like to enter a custom prompt to ask the user for input?* Y/N \n*(If not the default is \"What is your value to check?\")\nYour Reply: ";
    cin >> yesOrNo;
    if (yesOrNo == "Y" || yesOrNo == "y") {
        cout << "What Would you like the prompt to be?\nYour Reply: ";
        cin >> inputPrompt;
    }
    cout << "Would you like to enter a custom prompt to inform the user their input was invalid?* Y/N \n*(If not the default is \"Your input was invalid\")\nYour Reply: ";
    cin >> yesOrNo;
    if (yesOrNo == "Y" || yesOrNo == "y") {
        cout << "What Would you like the prompt to be?\nYour Reply: ";
        cin >> invalidResponse;
    }
    promptUser();
}



void Prompt::promptUser() {
    int input = 0;
    cout << inputPrompt <<  "\nYour Reply: ";
    cin >> input;
    if (checkValidity(input)) {
        cout << "The value chosen by the user was: " << input << endl;
    }
    else {
        cout << invalidResponse;
    }

}

bool Prompt::checkValidity(int input) {
    if (input <= upperBound && input >= lowerBound) {
        return true;
    }
    else {
        return false;
    }
}
