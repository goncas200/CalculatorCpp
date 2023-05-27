#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

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
    return a / b;
}

double power(double a, double b) {
    return pow(a, b);
}

int main() {
    cout << "Welcome To the calculator!!\n\n";
    while (true) {
        string user;
        string s;
        vector<double> number;
        vector<char> operations;
        bool first = true;
        int number_interator = 0;
        double ffinal = 0;
        cout << "Operation: ";
        getline(cin, user);
        for (char i : user) {
            if (i == ' ') {
                continue;
            }
            if (i == '+') {
                number.push_back(stod(s));
                operations.push_back(i);
                s = "";
            }
            else if (i == '-') {
                number.push_back(stod(s));
                operations.push_back(i);
                s = "";
            }
            else if (i == '*') {
                number.push_back(stod(s));
                operations.push_back(i);
                s = "";
            }
            else if (i == '/') {
                number.push_back(stod(s));
                operations.push_back(i);
                s = "";
            }
            else if (i == '%') {
                number.push_back(stod(s));
                operations.push_back(i);
                s = "";
            }
            else if (i == '%') {
                number.push_back(stod(s));
                operations.push_back(i);
                s = "";
            }
            else s += i;
        }
        number.push_back(stod(s));
        for (char& i : operations) {
            if (i == '+') {
                if (first) {
                    ffinal = add(number[number_interator], number[number_interator + 1]);
                    number_interator += 2;
                    first = false;
                }
                else {
                    ffinal = add(ffinal, number[number_interator]);
                    ++number_interator;
                }
            }
            else if (i == '-') {
                if (first) {
                    ffinal = subtract(number[number_interator], number[number_interator + 1]);
                    number_interator += 2;
                    first = false;
                }
                else {
                    ffinal = subtract(ffinal, number[number_interator]);
                    ++number_interator;
                }
            }
            else if (i == '*') {
                if (first) {
                    ffinal = multiply(number[number_interator], number[number_interator + 1]);
                    number_interator += 2;
                    first = false;
                }
                else {
                    ffinal = multiply(ffinal, number[number_interator]);
                    ++number_interator;
                }
            }
            else if (i == '/') {
                if (first) {
                    ffinal = divide(number[number_interator], number[number_interator + 1]);
                    number_interator += 2;
                    first = false;
                }
                else {
                    ffinal = divide(ffinal, number[number_interator]);
                    ++number_interator;
                }
            }
            else if (i == '%') {
                if (first) {
                    ffinal = power(number[number_interator], number[number_interator + 1]);
                    number_interator += 2;
                    first = false;
                }
                else {
                    ffinal = power(ffinal, number[number_interator]);
                    ++number_interator;
                }
            }
        }
        cout << ffinal << "\n";
    }
    return 1;
}