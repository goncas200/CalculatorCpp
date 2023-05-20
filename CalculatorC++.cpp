#include <iostream>
#include <cmath>

using namespace std;

void add() {
    double first, second;
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    cout << first + second << "\n";
}

void subtract() {
    double first, second;
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    cout <<  first - second << "\n";
}

void multiply() {
    double first, second;
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    cout <<  first * second << "\n";
}

void divide() {
    double first, second;
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    cout << first / second << "\n";
}

void power() {
    double first, second;
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    cout << pow(first, second) << "\n";
}

void sqrrt() {
    double first;
    cout << "Number: ";
    cin >> first;
    cout << sqrt(first) << "\n";
}

int main()
{
    cout << "Welcome To the calculator!!\n";
    while (true) {
        string user;
        cout << "What operation do you want to do? [+ (add); - (subtract); * (multiply); / (divide); ** (power); % (squareroot); exit (to exit the program)]: ";
        cin >> user;
        try {
            if (user == "+")
                add();

            else if (user == "-")
                subtract();

            else if (user == "*")
                multiply();

            else if (user == "/")
                divide();

            else if (user == "**")
                power();

            else if (user == "%")
                sqrrt();

            else if (user == "exit")
                return 0;

            else
                throw "Error: Invalid operation\n";

        }
        catch (const char s[]) {
            cout << s;
        }
        catch (...) {
            cout << "Error: Try to put . in floats instead of ,\n";
        }
    }
    return 1;
}