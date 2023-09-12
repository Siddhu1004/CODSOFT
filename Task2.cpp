#include <iostream>

int main() {
    double num1, num2, result;
    char operation;

    //  the user to enter the first number
    std::cout << "Enter the 1st number: ";
    std::cin >> num1;

    //  the user to enter the operation
    std::cout << "Enter an operation (+ for addition, - for subtraction, * for multiplication, / for division): ";
    std::cin >> operation;

    // user to enter the second number
    std::cout << "Enter the 2nd number: ";
    std::cin >> num2;

    // Perform the selected operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: wrong operation." << std::endl;
    }

    return 0;
}
