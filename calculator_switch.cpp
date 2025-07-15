#include <iostream>

double calculate(double x, double y, char op) {
    switch (op) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y == 0) {
                std::cout << "Cannot divide by zero\n";
                return 0;
            }
            return x / y;
        default:
            std::cout << "Unknown operator\n";
            return 0;
    }
}

int main() {
    double num1, num2;
    char oper;

    std::cout << "Number 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;
    std::cout << "Operation (+ - * /): ";
    std::cin >> oper;

    double res = calculate(num1, num2, oper);
    std::cout << "Result is: " << res << std::endl;

    return 0;
}