#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

void displayMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double a);

int main() {
    int choice;
    double num1, num2;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << power(num1, num2) << endl;
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << squareRoot(num1) << endl;
                break;
            case 0:
                cout << "Exiting the calculator." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}

void displayMenu() {
  cout << "Scientific Calculator" << endl;
  cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Division" << endl;
  cout << "5. Power" << endl;
  cout << "6. Square Root" << endl;
  cout << "0. Exit" << endl;
}

double add(double a, double b) {
  return a + b;
}

double subtract(double a, double b) {
  return a - b;
}

double multiply(double a, double b) {
  return a * b;
}

double divide(double a, double b) {
  if (b == 0) {
      cerr << "Error: Division by zero." << endl;
      return numeric_limits<double>::quiet_NaN();
  }
  return a / b;
}

double power(double base, double exponent) {
  return pow(base, exponent);
}

double squareRoot(double a) {
  if (a < 0) {
      cerr << "Error: Square root of a negative number." << endl;
      return numeric_limits<double>::quiet_NaN();
  }
  return sqrt(a);
}