#include <iostream>
using namespace std;

int main () // Main Function
{
    int i = 1, j = 2, k = 3; // VARIABLES ARE DECLARED
    if (i > j) // if Condition checks whether the variable i is greater than the variable j
        if (i > k) // nested if Condition which checks if variable i is greater than variable k
            cout << "A"; // Outputs "A"
        else            //this nested else takes over if the nested if Condition returns a false value
            cout << "B"; // Outputs "B"
        return 0; // Serves as an exit status code for the operating system or calling process
}

//THE OUTPUT IS NOTHING BECAUSE THE CODE CHECKS IF i > j but in this case 1 is not greater than 2 so it returns a false value