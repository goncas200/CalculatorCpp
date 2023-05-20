#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double better_double(string s) {
    string final;
    for (char c : s) {
        if (c == ',')
            final += '.';

        else if (c != '1' and c != '2' and c != '3' and c != '4' and c != '5' and c != '6' and c != '7' and c != '8' and c != '9' and c != '0')
            return 1.0;

        else
            final += c;
    }
    return stod(final);
}

void add() {
    string first, second;
    double dfirst, dsecond;
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    dfirst = better_double(first);
    dsecond = better_double(second);
    cout << dfirst + dsecond << "\n";
}

void subtract() {
    string first, second;
    double dfirst, dsecond;
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    dfirst = better_double(first);
    dsecond = better_double(second);
    cout << dfirst - dsecond << "\n";
}

void multiply() {
    string first, second;
    double dfirst, dsecond;
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    dfirst = better_double(first);
    dsecond = better_double(second);
    cout << dfirst * dsecond << "\n";
}

void divide() {
    string first, second;
    double dfirst, dsecond;
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    dfirst = better_double(first);
    dsecond = better_double(second);
    cout << dfirst / dsecond << "\n";
}

void power() {
    string first, second;
    double dfirst, dsecond;
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    dfirst = better_double(first);
    dsecond = better_double(second);
    cout << pow(dfirst, dsecond) << "\n";
}

void sqrrt() {
    string first;
    double dfirst;
    cout << "Number: ";
    cin >> first;
    dfirst = better_double(first);
    cout << sqrt(dfirst) << "\n";
}

int main() {
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