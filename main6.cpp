#include <iostream>
using namespace std;

int main()
{   
    int num1,num2,answer;
    char opp;
    
    cout<<"Enter an operator +,-,/,*"<<endl;
    cin >> opp;
    
        switch (opp) {
            case '+': cout<<"Enter two numbers to add"<< endl; break;
            case '-': cout<<"Enter two numbers to subtract"<< endl; break;
            case '/': cout<<"Enter two numbers to divide"<< endl; break;
            case '*': cout<<"Enter two numbers to multiply"<< endl; break;
            default: cout << "Error! enter an operator +,-,/ or *"; break;
        }
        
    cin >> num1;
    cin >> num2;
    
        switch (opp) {
            case '+':
                answer = num1 + num2;
                cout<<"Answer is "<< answer << endl; 
            break;
            case '-': 
                answer = num1 - num2;
                cout<<"Answer is "<< answer << endl; 
            break;
            case '/': 
                answer = num1 / num2;
                cout<<"Answer is "<< answer << endl; 
            break;
            case '*': 
                answer = num1 * num2;
                cout<<"Answer is "<< answer << endl; 
            break;
            default: 
                cout << "ERROR: Enter TWO VALID NUMBERS.";
            break;
        }
            
    return 0;
}