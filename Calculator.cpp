#include <iostream>

double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    std::cout << "Enter the first operand: ";
    double a, b;
    int d;
    std::cin >> a;
    std::cout << "Enter the second operand: ";
    std::cin >> b;
    std::cout << "Enter the operator (1-4):\n";
    std::cout << "1 for add\n2 for sub\n3 for multiply\n4 for division\n";
    std::cin >> d;

    double result;

    switch(d) {
        case 1:
            result = add(a, b);
            break;
        case 2:
            result = sub(a, b);
            break;
        case 3:
            result = multiply(a, b);
            break;
        case 4:
            if (b != 0) {
                result = divide(a, b);
            } else {
                std::cout << "Division by zero is not allowed.\n";
                return 1; // Exit the program if division by zero is attempted
            }
            break;
        default:
            std::cout << "Enter a valid choice from 1-4\n";
            return 1; // Exit the program if an invalid choice is entered
    }

    std::cout << "The result is: " << result << std::endl;

    return 0;
}
