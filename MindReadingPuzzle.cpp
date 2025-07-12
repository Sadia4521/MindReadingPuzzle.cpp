#include <iostream>
using namespace std;
void mindReadingPuzzle() {
    int number, num;
    cout << "\n\t\t\t********** Welcome to THE MIND WHISPERER! **********" << endl<<endl;
    cout << "Think of a number between 1 and 10, but don't tell me." << endl;
    cout << "Now, multiply your number by 2." << endl;
    cout << "Add 8 to the result." << endl;
    cout << "Divide the result by 2." << endl;
    cout << "What number are you left with? (Enter it here): ";
    cin >> number;
    num = number - 4;
    cout << "Press Enter when you're ready for me to read your mind!" << endl;
    cin.ignore();
    cin.get();
    cout << "The number you're thinking of is: " << num << endl;
    cout << "Fantastic, right?" << endl;
}
void magic() {
    cout << "\n\t\t\t ********** Welcome to THE AGE & THOUGHT ORACLE! **********" << endl << endl;
    cout << "Think of a number between 1 and 9, but don't tell me." << endl;
    cout << "Now, multiply your number by 2." << endl;
    cout << "Add 5 to the result." << endl;
    cout << "Now, multiply your number by 50." << endl;
    cout << "Add 1774 to the result." << endl;
    cout << "Right now, You have a four digit number" << endl;
    cout << "Now, subtract your birth number from the result." << endl;
    cout << "Press Enter when you're ready for me to read your mind and age!" << endl;
    cin.ignore();
    cin.get();
    cout << "The first digit is your thought number, and the following digits represent your age." << endl;
    cout << "Fantastic, right?" << endl;
}
int main(){
    int n;
    cout << "\t\t\t********** WELCOME TO MIND READING PUZZLE GAME **********" << endl;
    cout << "We have two games there\n1. The Mind Whisperer.\n2. The Age & Thought Oracle."<<endl;
    cout << "Which Game do you want to play? ";
    cin >> n;
    if (n == 1) mindReadingPuzzle();
    else if (n == 2) magic();
    else cout << "Wrong Choice.";
    return 0;
}
