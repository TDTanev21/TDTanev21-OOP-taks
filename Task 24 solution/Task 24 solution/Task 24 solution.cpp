#include <iostream>

using namespace std;

class Calculator {
private:
    float num1, num2;

public:

    Calculator() : num1(0), num2(0) {}


    float add(float n1, float n2) {
        return n1 + n2;
    }

    float subtract(float n1, float n2) {
        return n2 - n1;
    }

    float multiply(float n1, float n2) {
        return n1 * n2;
    }

    float divide(float n1, float n2) {
        if (n1 == 0) {
            cerr << "Error: Division by zero\n";
        }
        return n2 / n1;
    }
};

int main() {
    Calculator obj;
    float n1, n2;

    cin >> n1 >> n2;

    float result_add = obj.add(n1, n2);
    float result_subtract = obj.subtract(n1, n2);
    float result_multiply = obj.multiply(n1, n2);
    float result_divide = obj.divide(n1, n2);

    cout << "Addition: " << result_add << endl;
    cout << "Subtraction: " << result_subtract << endl;
    cout << "Multiplication: " << result_multiply << endl;
    cout << "Division: " << result_divide << endl;

}