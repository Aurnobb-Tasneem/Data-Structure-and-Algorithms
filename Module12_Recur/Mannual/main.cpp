#include <iostream>
int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}



int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


int sumOfDigits(int x) {
    if (x < 10) {
        return x;
    } else {
        return x % 10 + sumOfDigits(x / 10);
    }
}


int findMin(int a[], int size) {
    if (size == 1) {
        return a[0];
    } else {
        int minRest = findMin(a, size - 1);
        return (a[size - 1] < minRest) ? a[size - 1] : minRest;
    }
}


int DecToBin(int dec) {
    if (dec == 0) {
        return 0;
    } else {
        return dec % 2 + 10 * DecToBin(dec / 2);
    }
}


double sumOfSeries(int n) {
    if (n == 0) {
        return 1.0;
    } else {
        return 1.0 / pow(2, n) + sumOfSeries(n - 1);
    }
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
