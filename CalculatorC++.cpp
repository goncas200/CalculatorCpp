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
        bool priority = false;
        int number_interator = 0;
        int priority_iterator = 0;
        double ffinal = 0;
        cout << "Operation: ";
        getline(cin, user);
        for (char i : user) {
            if (i == ' ') {
                continue;
            }
            if (i == '+' or i == '-') {
                if (!priority) {
                    number.push_back(stod(s));
                    operations.push_back(i);
                    s = "";
                }
                else {
                    number.insert(number.begin() + priority_iterator, stod(s));
                    operations.push_back(i);
                    s = "";
                    ++priority_iterator;
                    priority = false;
                }
            }
            else if (i == '*' or i == '/' or i == '%') {
                number.insert(number.begin() + priority_iterator, stod(s));
                operations.insert(operations.begin() + priority_iterator, i);
                s = "";
                priority = true;
                ++priority_iterator;
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
