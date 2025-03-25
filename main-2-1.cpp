#include <iostream>

extern int *readNumbers(); void hexDigits(int *numbers,int length);

int main() {
    int *numbers = readNumbers();
    int  length = 10;

    hexDigits(numbers,length);

    delete[] numbers;
    return 0;
}