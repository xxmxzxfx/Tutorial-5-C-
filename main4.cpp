#include <iostream>
using namespace std;

int main()
{
    string letter;
    cout<<"Please Enter a letter of the alphabet."<<endl;
    cin >> letter;
    
    if (letter == "A" ||letter == "E"|| letter == "I"|| letter == "O"|| letter == "U"||letter == "a"|| letter == "e"|| letter == "i"|| letter == "o"|| letter == "u") {
        cout<<"You displayed the letter '" << letter << "' which is a vowel";
    }
    else {
        cout<<"You displayed the letter '" << letter << "' which is a consonant";
    }
    return 0;
}