#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Please enter 3 Numbers." << endl;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    if (a < b && a < c) {
        cout << "Your displayed number is " << a;
    }
    else if (b < a && b <c) {
        cout << "Your displayed number is " << b;
    }
    else if (c < a && c < a) {
        cout << "Your displayed number is " << b;
    }
    return 0;
}