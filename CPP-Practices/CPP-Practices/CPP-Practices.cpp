#include <iostream>

class Calculator {
public:
    void PrintResult(float num1, char operation, float num2) {
        std::cout << num1 << operation << num2 << '=';
    }

    float Subtraction(float num1, float num2) {
        return num1 - num2;
    }

    float Addition(float num1, float num2) {
        return num1 + num2;
    }

    float Multiplication(float num1, float num2) {
        return num1 * num2;
    }

    float Divide(float num1, float num2) {
        return num1 / num2;
    }
};

int main() {
    float num1, num2;
    char operation;
    Calculator calc;

    std::cout << "CALCULATOR\n";
    std::cout << "------------OPERATIONS------------\n";
    std::cout << "--Plus(+)--Minus(-)--Divide(/)--Multiplication(*)--\n";
    std::cin >> num1 >> operation >> num2;

    switch (operation) {
    case '-':
        calc.PrintResult(num1, operation, num2);
        std::cout << calc.Subtraction(num1, num2);
        break;
    case '+':
        calc.PrintResult(num1, operation, num2);
        std::cout << calc.Addition(num1, num2);
        break;
    case '*':
        calc.PrintResult(num1, operation, num2);
        std::cout << calc.Multiplication(num1, num2);
        break;
    case '/':
        calc.PrintResult(num1, operation, num2);
        std::cout << calc.Divide(num1, num2);
        break;
    default:
        std::cout << "Geçersiz işlem!";
    }

    return 0;
}