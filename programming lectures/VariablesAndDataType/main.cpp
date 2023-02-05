#include <iostream>
using namespace std;


void ex1() {
    char character;
    int number;
    bool boolean;
    float floatingNumber;

    cout << "Write any letter: ";
    cin >> character;
    cout << "Letter:" << character << '\n' << endl;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Number: " << number << '\n' << endl;

    cout << "Enter a boolean (0 or 1): ";
    cin >> boolean;
    cout << "Boolean: " << boolean << '\n' << endl;

    cout << "Enter a number between 0 and 1: ";
    cin >> floatingNumber;
    cout << "Floating Number: " << floatingNumber << '\n' << endl;
}

void ex2() {
    int num1, num2, result1, result2, result3, result5, result4;

    cout << "Enter validation for number1 and number2: \n";

    cin >> num1;
    cout << "Num1: " << num1 << '\n';

    cin >> num2;
    cout << "Num2: " << num2 << '\n' << endl;

    result1 = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result1 << '\n';

    result2 = num2 - num1;
    cout << num2 << " - " << num1 << " = " << result2 << '\n';

    result3 = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result3 << '\n';

    result4 = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result4 << '\n';

    result5 = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result5 << '\n' << endl;
}

void ex3() {
    int num1, num2;

    cout << "Enter validation for number1, number2: \n";

    cin >> num1;
    cout << "Number1: " << num1 << '\n';

    cin >> num2;
    cout << "Number2: " << num2 << '\n' << endl;

    cout << "Number1 = " << num1 << " + " << num2 << '\n';
    num1 += num2;
    cout << "New validation for Number1: " << num1 << '\n' << endl;

    cout << "Number1 = " << num1 << " + 1 " << '\n';
    num1++;
    cout << "New validation for Number1: " << num1 << '\n' << endl;

    cout << "Number1 = " << num1 << " - " << num2 << '\n';
    num1 -= num2;
    cout << "New validation for Number1: " << num1 << '\n' << endl;

    cout << "Number1 = " << num1 << " * " << num2 << '\n';
    num1 *= num2;
    cout << "New validation for Number1: " << num1 << '\n' << endl;

    cout << "Number1 = " << num1 << " / " << num2 << '\n';
    num1 /= num2;
    cout << "New validation for Number1: " << num1 << '\n' << endl;

    cout << "Number1 = " << num1 << " % " << num2 << '\n';
    num1 %= num2;
    cout << "New validation for Number1: " << num1 << '\n' << endl;
}

void ex4(){
    int a=6, b=8;

    cout << "Variables before the operation: " << "a: " << a << ", b: " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "Variables after the operation: " << "a: " << a << ", b: " << b << endl;
}

int main() {
    cout << '\n' << "Task 1" << '\n' << endl;
    ex1();

    cout << '\n' << "Task 2" << '\n' << endl;
    ex2();

    cout << '\n' << "Task 3" << '\n' << endl;
    ex3();

    cout << '\n' << "Task 4" << '\n' << endl;
    ex4();

    return 0;
}
