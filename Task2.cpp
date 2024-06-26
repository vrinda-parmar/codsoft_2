//                                  SIMPLE CALCULATOR

#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    while (true) {
        // Ask user that which operation they want to perform
        cout << "Please enter the operation you want to perform\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. EXIT\n";
        cin >> choice;

        if (choice == 5) {
            cout << "Thanks for using calculator!!" << endl;
            break;
        }

        // Ask user to enter two numbers on which they want to perform operation
        cout << "Please enter two numbers on which you want to perform the operation:" << endl;
        cin >> a >> b;

        switch (choice) {
            case 1:
                cout << "The addition of " << a << " and " << b << " is " << a + b << endl;
                break;
            case 2:
                cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl;
                break;
            case 3:
                cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
                break;
            case 4:
                if (b != 0)
                    cout << "The division of " << a << " and " << b << " is " << a / b << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            default:
                cout << "Please enter a correct choice!!" << endl;
        }

        cout << "=============================================================================================" << endl;
    }

    return 0;
}
