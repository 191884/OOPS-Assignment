#include <iostream>
using namespace std;

int factorial(int);

void print(int x,int y) {
    cout<<"The factorial of " << x << " = " << y;
    return;
}

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;
    result = factorial(n);
    print(n, result);
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}
