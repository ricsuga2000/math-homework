#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    int num1 = 0;
    int num2 = 0;
    char op = '+';

    // Get input from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Get operator from user
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Perform calculation
    int result = 0;
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Cannot divide by zero!" << endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator" << endl;
            return 1;
    }

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
