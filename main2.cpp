#include <iostream>
using namespace std;

int main () // Main Function
{
    int a;
    int b;
    
    cout << "Please enter two numbers. They can either be the same or different." <<endl;
    cin >> a;
    cin >> b;
    
    if (a == b) {
        cout << "Your Displayed Answer is " << a << " & " << b;
    }
    else {
        if (a > b) {
            cout << "Your Displayed Answer is " << a;
        }
        else if (b > a) {
            cout << "Your Displayed Answer is " << b;
        }
    }

return 0;

}